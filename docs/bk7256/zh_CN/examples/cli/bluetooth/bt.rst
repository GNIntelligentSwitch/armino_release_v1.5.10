BT Cli
===============

:link_to_translation:`en:[English]`


1. ���ܸ���
--------------------------
    Ϊ�˱�����֤BT��ع��ܣ�Ϊ�������һϵ��AT CMD������BLE AT CMD������ ``AT+BT=`` ��ͷ����Ӿ�������Ͳ������������ִ�гɹ����򷵻� ``CMDRSP:OK``���������ִ��ʧ�ܣ��򷵻� ``CMDRSP:ERROR``��


2. ����·��
--------------------------
	·��: ``\components\at\src\bt_at_command.c``


3. cli������
--------------------------
֧�ֵ���������:

    1.AT+BT=INQUIRY
     - ����˵��
        ɨ���������ɨ����Χ�ɼ���classic�豸
     - �����ʽ
        AT+BT=INQUIRY
     - ����˵��
        �޲���
     - ����ֵ˵��
        ɨ�赽���豸��ַ

    2.AT+BT=READ_SCAN_ENABLE
     - ����˵��
        ��ȡ��ǰ�豸�ɼ���
     - �����ʽ
        AT+BT=READ_SCAN_ENABLE
     - ����˵��
        �޲���
     - ����ֵ˵��
        .. csv-table::
            :header: "Value", "Parameter Description"
            :widths: 10, 50

            0x00,"No Scans enabled."
            0x01,"Inquiry Scan enabled. Page Scan disabled."
            0x02,"Inquiry Scan disabled. Page Scan enabled."
            0x03,"Inquiry Scan enabled. Page Scan enabled."

    3.AT+BT=WRITE_SCAN_ENABLE
     - ����˵��
        ���õ�ǰ�豸�ɼ���
     - �����ʽ
        AT+BT=WRITE_SCAN_ENABLE,param1
     - ����˵��
        .. csv-table::
            :header: "Param1", "Parameter Description"
            :widths: 10, 40

            0x00,"No Scans enabled."
            0x01,"Inquiry Scan enabled. Page Scan disabled."
            0x02,"Inquiry Scan disabled. Page Scan enabled."
            0x03,"Inquiry Scan enabled. Page Scan enabled."

    4.AT+BT=CONNECT
     - ����˵��
        ����ָ���豸
     - �����ʽ
        AT+BT=CONNECT,param1,param2
     - ����˵��
        .. csv-table::
            :header: "Param", "Parameter Description"
            :widths: 10, 40

            param1, "Bluetooth address"
            param2, "Allow_Role_Switch
             | 0x00 not accept role switch
             | 0x01 accept role switch"

    5.AT+BT=DISCONNECT
     - ����˵��
        �Ͽ�ָ���豸
     - �����ʽ
        AT+BT=DISCONNECT,param1
     - ����˵��
        .. csv-table::
            :header: "Param", "Parameter Description"
            :widths: 10, 40

            param1, "Bluetooth address"

    6.AT+BT=SPP_INIT
     - ����˵��
        SPP��ʼ����ע��SDP
     - �����ʽ
        AT+BT=SPP_INIT
     - ����˵��
        �޲���

    7.AT+BT=SPP_CONNECT
     - ����˵��
        SPP����ָ���豸
     - �����ʽ
        AT+BT=SPP_CONNECT,param1
     - ����˵��
        .. csv-table::
            :header: "Param", "Parameter Description"
            :widths: 10, 40

            param1, "Bluetooth address"

    8.AT+BT=SPP_TX
     - ����˵��
        SPP����ָ������
     - �����ʽ
        AT+BT=SPP_TX,param1
     - ����˵��
        .. csv-table::
            :header: "Param", "Parameter Description"
            :widths: 10, 40

            param1, "send data"
     - ��������
        AT+BT=SPP_TX,beken-spp-tx_test!!!!

    9.AT+BT=SPP_THROUGH_TEST
     - ����˵��
        SPP���²��ԣ����͵�����Ϊ������ɵ�����
     - �����ʽ
        AT+BT=SPP_THROUGH_TEST,param1
     - ����˵��
        .. csv-table::
            :header: "Param", "Parameter Description"
            :widths: 10, 40

            param1, "send data length"
     - ����ֵ˵��
        ָ�����ȵ����ݷ�����ɺ�client��server���log������Է������ݼ����CRCֵ�Լ��������ʡ�
     - ��������
        AT+BT=SPP_THROUGH_TEST,0xfffff