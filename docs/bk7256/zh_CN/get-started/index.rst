快速入门
=======================

:link_to_translation:`en:[English]`

本文档以 BK7256 开发板为例，通过一个简单的示例项目向您展示

 - 如何构建Armino编译环境；
 - 以及如何配置 Armino 工程；
 - 如何编译、下载固件；

准备工作
------------------------

硬件：

 - BK7256 开发板
 - 串口烧录工具
 - 电脑（Windows 与 Ubuntu）

.. note::

  Armino 仅支持在 Linux 平台编译，仅支持在 Windows 平台进行固件烧录。
  因此，您需要两台电脑，一台 Linux 平台，一台 Windows 平台；
  当然，您也可以只使用 Windows 平台，在 Windows 平台上安装 Linux 虚拟机。

软件：

 - RISCV工具链，用于编译 Armino RISCV版本；
 - 构建工具，包含 CMake；
 - Armino 源代码；
 - 串口烧录软件；


开发板简介
------------------------

点击下列链接了解 Armino 支持的开发板详细信息：

.. toctree::
    :maxdepth: 1

        BK7256 <../boards/bk7256>




Armino SDK代码下载
------------------------------------

您可从 gitlab 上下载 Armino::

    mkdir -p ~/armino
    cd ~/armino
    git clone http://gitlab.bekencorp.com/wifi/armino.git

您也可从 github 上下载 Armino::

    mkdir -p ~/armino
    cd ~/armino
    git clone https://github.com/bekencorp/armino.git

.. note::

    从官网的gitlab下载的为最近的SDK代码，相关账号找项目上审核申请。


构建编译环境
------------------------------------

.. note::

    Armino，当前支持Linux环境下编译，本章节将以Ubuntu 20.04 LTS版本为例，介绍整个编译环境的搭建。


工具链安装
------------------------------------

BK7256工具链下载路径如下：

	工具链下载：
	http://dl.bekencorp.com/tools/toolchain/
	在此目录下获取最新版本，如：toolchain_v5.1.1.tgz

工具包下载后，通过如下操作命令解压至 /opt/risc-v目录下::

    $ sudo tar -zxvf toolchain_v5.1.1.tgz -C /


.. note::

    工具链默认路径在middleware/soc/bk7256/bk7256.defconfig文件中定义，客户可自行配置::

        CONFIG_TOOLCHAIN_PATH="/opt/risc-v/nds32le-elf-mculib-v5/bin"

程序编译依赖库安装
------------------------------------

在终端输入下述命令安装 python3，CMake，Ninja， Crypto以及依赖库::

    sudo dpkg --add-architecture i386
    sudo apt-get update
    sudo apt-get install build-essential cmake python3 python3-pip doxygen ninja-build libc6:i386 libstdc++6:i386 libncurses5-dev lib32z1 -y
    sudo pip3 install pycrypto

文档编译依赖库安装
------------------------------------

在终端上输入如下命令安装文档编译所需要的 python 依赖::

    sudo pip3 install sphinx_rtd_theme future breathe blockdiag sphinxcontrib-seqdiag sphinxcontrib-actdiag sphinxcontrib-nwdiag sphinxcontrib.blockdiag


设置Python默认版本::

    sudo ln -s /usr/bin/python3 /usr/bin/python


编译工程
------------------------------------

在终端下输入下述命令编译 Armino 默认工程，PROJECT为可选参数，默认为app，默认工程为启动 WiFi，BLE，初始化常见驱动，并启动 Armino 默认 Cli 程序::

    cd ~/armino
    make bk7256

- BK7256为双CPU核系统，默认配置为双核，编译BK7256平台CPU0系统，会自动编译CPU1和CPU0，并将CPU0，CPU1系统一起打包



- BK7256平台默认工程使用的是FreeRTOS V10.4系统::

    components/os_source/freertos_v10

- BK7256平台支持鸿蒙OS V3.0.1系统，可编译harmony工程::

    cd ~/armino
    make bk7256 PROJECT=harmony

- 当然您也可以编译任何其他 armino/projects 下的工程，命令如下::

    cd ~/armino
    make bk7256 PROJECT=examples/get-started/hello_world


配置工程
------------------------------------

- 您可以通过 menuconfig 来更改 Armino 默认配置项::

    cd ~/armino
    make menuconfig

- 您也可以直接通过工程配置文件来进行差异化配置::

    工程配置文件 Override 芯片配置文件 Override 默认配置
    如： bk7256.config >> bk7256.defconfig >> KConfig
    + 工程配置文件示例：
        projects/app/config/bk7256.config
        projects/harmony/config/bk7256.config
	projects/customization/bk7256_config1/config/bk7256.config
    + 芯片配置文件示例：
        middleware/soc/bk7256/bk7256.defconfig
    + KConfig配置文件示例：
        middleware/arch/riscv/Kconfig
        components/bk_cli/Kconfig

- 重要的配置说明
    + 操作系统配置为FreeRTOS V10::

        #
        # FreeRTOS
        #
        CONFIG_FREERTOS=y
        # CONFIG_LITEOS_M is not set
        CONFIG_FREERTOS_V9=n
        CONFIG_FREERTOS_V10=y

    + 操作系统配置为鸿蒙OS::

        # LITEOS_M
        CONFIG_LITEOS_M_V3=y
        CONFIG_LITEOS_M_BK=y

        # FreeRTOS
        CONFIG_FREERTOS=n
        CONFIG_FREERTOS_V9=n
        CONFIG_FREERTOS_V10=n

- 系列芯片宏的使用与差异

    + 宏CONFIG_SOC_BK7256XX 表示BK7256系列::

        属于BK7235/BK7237/BK7256公共芯片宏，CPU1也需要定义该宏
		配置方式：CONFIG_SOC_BK7256XX=y
		

    + 区分同系列芯片的宏(不用于区分其他芯片)::

		CONFIG_SOC_BK7256, CPU1需要定义该宏和CONFIG_SLAVE_CORE组合区分BK7256_CPU1
		配置方式：CONFIG_SOC_BK7256=y
		

    + 字符串系列芯片的宏(用于编译阶段区分其他芯片)::

         cpu0/cpu1有区分：
		 CPU0写法：CONFIG_SOC_STR="bk7256"
		 CPU1写法：CONFIG_SOC_STR="bk7256_cp1"


    + 双核CPU0,CPU1相关宏区分(用于代码区分)::

        CONFIG_DUAL_CORE            #双核功能
        CONFIG_MASTER_CORE          #依赖于CONFIG_DUAL_CORE，CPU0与CPU1的区别
        CONFIG_SLAVE_CORE           #依赖于CONFIG_DUAL_CORE，CPU0与CPU1的区别
        单核：上面的三个宏都不定义



新建工程
------------------------------------

默认工程为projects/app，新建工程可参考projects/harmony工程


烧录代码
------------------------------------

在 Windows 平台上， Armino 目前支持 UART 烧录。



通过串口烧录
********************

.. note::

    Armino支持UART烧录，推荐使用 CH340 串口工具小板进行下载。

串口烧录工具如下图所示:

.. figure:: ../../_static/download_tool_uart.png
    :align: center
    :alt: Uart
    :figclass: align-center

    UART

烧录工具获取：

	http://dl.bekencorp.com/tools/flash/
	在此目录下获取最新版本，如：BEKEN_WRITER_V1.6.38_20220905.zip

bk_writer.exe 界面及相关配置如下图所示：

.. figure:: ../../_static/download_uart_bk7256.png
    :align: center
    :alt: Bkwrite GUI
    :figclass: align-center

    bkwriter GUI


烧录串口UART1，点击``烧录``进行版本烧录, 烧录完成之后掉电重启设备。


串口Log及Command Line
------------------------------------

- 目前BK7256平台，串口Log及Command Line命令输入在UART1口；可通过help命令查看支持命令列表；
- CPU1的Log也通过CPU0的UART1串口输出，CPU1的Log带“cpu1”标记；
- CPU1的Command Line可通过CPU0的UART1执行，如::

    cpu1 help //输出cpu1的命令列表
    cpu1 time //输出cpu1的当前运行时间

