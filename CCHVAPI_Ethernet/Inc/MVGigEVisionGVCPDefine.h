
#ifndef __MV_GVCP_DEFINE_H__
#define __MV_GVCP_DEFINE_H__

// Discovery Protocol Control
#define MV_GEV_DISCOVERY_CMD            0x0002
#define MV_GEV_DISCOVERY_ACK            0x0003
#define MV_GEV_FORCEIP_CMD              0x0004
#define MV_GEV_FORCEIP_ACK              0x0005
// Streaming Protocol Control
#define MV_GEV_PACKETRESEND_CMD         0x0040
#define MV_GEV_PACKETRESEND_INVALID     0x0041
// Device Memory Access
#define MV_GEV_READREG_CMD              0x0080
#define MV_GEV_READREG_ACK              0x0081
#define MV_GEV_WRITEREG_CMD             0x0082
#define MV_GEV_WRITEREG_ACK             0x0083
#define MV_GEV_READMEM_CMD              0x0084
#define MV_GEV_READMEM_ACK              0x0085
#define MV_GEV_WRITEMEM_CMD             0x0086
#define MV_GEV_WRITEMEM_ACK             0x0087
#define MV_GEV_PENDING_ACK              0x0089
// Asynchronous Events
#define MV_GEV_EVENT_CMD                0x00C0
#define MV_GEV_EVENT_ACK                0x00C1
#define MV_GEV_EVENTDATA_CMD            0x00C2
#define MV_GEV_EVENTDATA_ACK            0x00C3
// Miscellaneous
#define MV_GEV_ACTION_CMD               0x0100
#define MV_GEV_ACTION_ACK               0x0101


/********************************************************************
 *      Standard Status Codes
 ********************************************************************/
#define MV_GEV_STATUS_SUCCESS                               0x0000  // ����ִ�гɹ�
#define MV_GEV_STATUS_PACKET_RESEND                         0x0100  // �����������ݰ������·���
#define MV_GEV_STATUS_NOT_IMPLEMENTED                       0x8001  // �豸��֧�ֵ�����
#define MV_GEV_STATUS_INVALID_PARAMETER                     0x8002  // �����������
#define MV_GEV_STATUS_INVALID_ADDRESS                       0x8003  // �����˷Ƿ���ַ�ռ�
#define MV_GEV_STATUS_WRITE_PROTECT                         0x8004  // �޷�д��Ѱַ�Ĵ���
#define MV_GEV_STATUS_BAD_ALIGNMENT                         0x8005  // ����ƫ�Ƶ�ַ�𻵻�ָ��������������
#define MV_GEV_STATUS_ACCESS_DENIED                         0x8006  // ָ���ĵ�ַ��ǰ�޷����ʣ����ܱ����������ռ
#define MV_GEV_STATUS_BUSY                                  0x8007  // �������Դ������޷���ʱ��Ӧ���Ժ������
#define MV_GEV_STATUS_DEPRECATED_0                          0x8008  // �� GigE Vision 2.0 �����õ�״̬��
#define MV_GEV_STATUS_DEPRECATED_1                          0x8009  // �� GigE Vision 2.0 �����õ�״̬��
#define MV_GEV_STATUS_DEPRECATED_2                          0x800A  // �� GigE Vision 2.0 �����õ�״̬��
#define MV_GEV_STATUS_DEPRECATED_3                          0x800B  // �� GigE Vision 2.0 �����õ�״̬��
#define MV_GEV_STATUS_PACKET_UNAVAILABLE                    0x800C  // ����������ݰ������ڣ����������벻����ʱʹ��
#define MV_GEV_STATUS_DATA_OVERRUN                          0x800D  // GVSP���Ͷ��ڲ��������
#define MV_GEV_STATUS_INVALID_HEADER                        0x800E  // ��Ϣͷ�Ƿ����ڲ��ֶβ�ƥ��
#define MV_GEV_STATUS_DEPRECATED_4                          0x800F  // �� GigE Vision 2.0 �����õ�״̬��
#define MV_GEV_STATUS_PACKET_NOT_YET_AVAILABLE              0x8010  // ����İ���û�б�ȷ��
#define MV_GEV_STATUS_PACKET_AND_PREV_REMOVED_FROM_MEMORY   0x8011  // ����İ���֮ǰ�İ�����Ч�򲻴��ڣ��Ҷ��ѱ����Ͷ˶�����
#define MV_GEV_STATUS_PACKET_REMOVED_FROM_MEMORY            0x8012  // ��������ݰ������ڣ����Ѿ������Ͷ˶�����
#define MV_GEV_STATUS_NO_REF_TIME                           0x8013  // ���豸û��ͬ����ʱ�ӣ�û��ʱ��ο�
#define MV_GEV_STATUS_PACKET_TEMPORARILY_UNAVAILABLE        0x8014  // �������⣬����ʱ������·���
#define MV_GEV_STATUS_OVERFLOW                              0x8015  // �豸���л�����������
#define MV_GEV_STATUS_ACTION_LATE                           0x8016  // ������һ���ڹ�ȥ��ʱ��Ĳ���
#define MV_GEV_STATUS_ERROR                                 0x8FFF  // ��������

/*The IETF has attributed port number 3956 as the standard GVCP port*/
#define MV_GVCP_PUBLIC_PORT             3956
/*The GVCP header provides an 8-bit field containing the hexadecimal key value 0x42. This enables devices and applications to identify GVCP packets.*/
#define MV_GVCP_CMD_KEY_VALUE           0x42

#define MV_GVCP_CMD_FLAG_NEED_ACK       0x01   //see Figure 15-1: Command Message Header
#define MV_GVCP_CMD_FLAG_BROADCAST_ACK  0x10   //see Figure 16-3: FORCEIP_CMD Message
#define MV_GVCP_CMD_FLAG_EXTEND_ID      0x10   //see Figure 16-13: PACKETRESEND_CMD Message
#define MV_GVCP_CMD_FLAG_ACTION_TIME    0x80   //see Figure 16-17: ACTION_CMD Message

/************************************************************************
 *                 see Table 8-1: GVCP Packet Header Size
 * IP header (options not allowed)        20
 * UDP header                             8
 * GVCP header                            8
 * Max. GVCP payload                      540
 * Total                                  576
 ************************************************************************/
#define MV_IP_HEADER_LEN                20
#define MV_UDP_HEADER_LEN               8
#define MV_GVCP_HEADER_LEN				8
/*576-20(IP HEADER)-8(UDP HEADER)-8(GVCP HEADER)*/
#define MV_GVCP_MAX_PAYLOAD_LEN         540
/*576-20(IP HEADER)-8(UDP HEADER)*/
#define MV_GVCP_MAX_MSG_LEN             548
/*[R-044c] Applications and devices MUST send GVCP packets containing at most 576 bytes*/
#define MV_GVCP_PACKET_MAX_LEN          576

#define MV_GVCP_HEARTBEAT_TIMEOUT       3000  //Factory Default
#define MV_GVCP_HEARTBEAT_INTERVAL      500   //ms

/*The initial value of req_id is not specified, but it cannot be 0.*/
#define MV_GVCP_REQ_ID_INIT             1

/*540 / 4 = 135*/
#define MV_GVCP_READ_REG_MAX_NUM        135
/*540 / 8 = 67.5 ~= 67*/
#define MV_GVCP_WRITE_REG_MAX_NUM       67

/*540 - 4 = 536*/
#define MV_GVCP_READ_MEM_MAX_LEN        536
#define MV_GVCP_WRITE_MEM_MAX_LEN       536

#define MV_GVCP_URL_MAX_LEN             512

#define MV_GVCP_SC_X_ADDRESS_UNIT       0x40

/*IP HEADER(20)+UDP HEADER(8)+GVSP HEADER(8)+PAYLOAD DATA LEN(1000)*/
#define MV_GVCP_GVSP_MAX_PACKET_SIZE    1036    //1280//1048

#define MV_GVCP_MAX_SCPSx_VALUE         (1024 * 10)
#define MV_GVCP_MIN_SCPSx_VALUE         (64)
#define MV_GVCP_DEFAULT_SCPSx_VALUE     (1500)



#define MV_GVSP_MAX_PAYLOAD_SIZE        (MV_GVCP_GVSP_MAX_PACKET_SIZE - 36)
#define MV_GVCP_GVSP_MAX_DELAY_SEC      3      // Gvsp��ȡ�����У��������3sû���յ����ݣ�����Ϊ���ճ�ʱ

#define MV_GVCP_CCP_EXCLUSIVE_ACCESS    0x1
#define MV_GVCP_CCP_CONTROL_ACCESS      0x2
#define MV_GVCP_CCP_CONTROL_SWITCH      0x6

/************************************************************************
 * GVCP_HEADER �����֣�����Ϊ CMD_MSG_HEADER �� ACK_MSG_HEADER
 ************************************************************************/
// ������Ϣͷ����
typedef struct _CMD_MSG_HEADER_
{
    unsigned char       cKeyValue;      // [8bits] 0x42, GVCP����Ĺؼ���

    /*
     * ��4bits��ÿ��������Ϣ�������ֶΣ���4bits��GVCPͷ��ͨ���ֶΣ�
     * �������λ��ʾ�Ƿ���ҪACK��
     * ��δʹ�ã�ȫ��bits��������0��
     *    0   1   2   3   4   5   6   7
     * +---+---+---+---+---+---+---+---+
     * |    special    |    common     |
     * +---+---+---+---+---+---+---+---+
     */
    unsigned char       cFlg;           // [8bits]
    unsigned short      nCommand;       // [16bits] �ο���Ϣֵ�궨��
    unsigned short      nLength;        // [16bits] �ýṹ��֮��ĸ������ݳ���,ͨ��Ϊ8
    unsigned short      nReqId;         // [16bits] ����ID����Ӧ�ó������ɡ�����Ϊ0
} CMD_MSG_HEADER;

// ȷ����Ϣͷ����
typedef struct _ACK_MSG_HEADER_
{
    unsigned short      nStatus;         // [16bits] ���������״̬���ο�״̬��궨��
    unsigned short      nAckMsgValue;    // [16bits] ȷ����Ϣֵ �ο���Ϣֵ�궨��
    unsigned short      nLength;         // [16bits] �ýṹ��֮��ĸ������ݳ���
    unsigned short      nAckId;          // [16bits] ��ӦID������յ�CMD��Ϣ�е�req_id��ͬ
} ACK_MSG_HEADER;

/************************************************************************
 *  GVCP_PAYLOAD  ���ض��塣���������ȷ����Ϣ�Ĳ�ͬ���и��ԵĶ���
 ************************************************************************/

/***************************************************
 *  1. [CMD] �豸���֣�����Ҫ���� ��
 *     flag�ֶ�˵����bit 0~2, ����,��0��bit 3, ����Ӧ����Ϣ�㲥��bit 7 ������1��
 *    ���������豸����֧�֡�
 ***************************************************/

/***************************************************
 *  2. [ACK] �豸Ӧ�𣬸��ض���Ϊ�ṹ�� DISCOVERY_ACK_MSG
 *    ���������豸����֧�֡�
 ***************************************************/
typedef struct _DISCOVERY_ACK_MSG_
{
    unsigned short nMajorVer;
    unsigned short nMinorVer;
    unsigned int   nDeviceMode;
    unsigned short nRes1;
    unsigned short nMacAddrHigh;
    unsigned int   nMacAddrLow;
    unsigned int   nIpCfgOption;
    unsigned int   nIpCfgCurrent;       //IP configuration:bit31-static bit30-dhcp bit29-lla
    unsigned int   nRes2[3];
    unsigned int   nCurrentIp;
    unsigned int   nRes3[3];
    unsigned int   nCurrentSubNetMask;
    unsigned int   nRes4[3];
    unsigned int   nDefultGateWay;
    unsigned char  chManufacturerName[32];
    unsigned char  chModelName[32];
    unsigned char  chDeviceVersion[32];
    unsigned char  chManufacturerSpecificInfo[48];
    unsigned char  chSerialNumber[16];
    unsigned char  chUserDefinedName[16];
} DISCOVERY_ACK_MSG;

/***************************************************
 *  3. [CMD] ǿ��IP�����ض���Ϊ�ṹ�� FORCEIP_CMD_MSG
 *     flag�ֶ�˵����bit 0~2, ����,��0��bit 3, ����Ӧ����Ϣ�㲥��bit 7 ������1��
 *    ���������豸����֧�֡�
 ***************************************************/
typedef struct _FORCEIP_CMD_MSG_
{
    unsigned char       nReserved0[2];
    unsigned short      nMacAddrHigh;
    unsigned int        nMacAddrLow;
    unsigned int        nReserved1[3];
    unsigned int        nStaticIp;      // ������ֶ�Ϊ0���豸������ȫ��������ӿ�������IP���ã�������Ҫ�ظ�ȷ����Ϣ;
    unsigned int        nReserved2[3];
    unsigned int        nStaticSubNetMask;
    unsigned int        nReserved3[3];
    unsigned int        nStaticDefaultGateWay;

} FORCEIP_CMD_MSG;

/***************************************************
 *  4. [ACK] ǿ��IP������Ҫ���ء���IP��Ҫʹ���µ�IP����
 *    ���������豸����֧�֡�
 ***************************************************/

/***************************************************
 *  5. [CMD] ���Ĵ���������Ϊһϵ��32bits�ļĴ�����ַ������һ����
 *     flag�ֶ�˵����bit 0~2, ����,��0��bit 3, ����Ӧ����Ϣ�㲥��bit 7 ������1��
 *    ���������豸����֧�֡�
 ***************************************************/
typedef struct _READREG_CMD_MSG_
{
    unsigned long       nRegAddress;   // �Ĵ�����ַ
} READREG_CMD_MSG;
/**************************************************
 *  6. [ACK] ���Ĵ���������Ϊһϵ��32bits��ֵ����Щֵ��CMD�ļĴ�����ַ�л�ȡ��
 *    ���������豸����֧�֡�
 ***************************************************/
typedef struct _READREG_CMD_MSG_ACK_
{
    unsigned long       nRegData;   // �Ĵ�����ַ
} READREG_CMD_MSG_ACK;
/***************************************************
 *  7. [CMD] д�Ĵ���������Ϊ WRITEREG_CMD_MSG ���飨����һ�������67����
 *     lag�ֶ�˵����bit 0~2, ����,��0��bit 3, ����Ӧ����Ϣ�㲥��
 *    ���������豸����֧�֡�
 ***************************************************/
typedef struct _WRITEREG_CMD_MSG_
{
    unsigned int       nRegAddress;   // �Ĵ�����ַ
    unsigned int        nRegData;      // ��ַ��Ӧ������
} WRITEREG_CMD_MSG;

/***************************************************
 *  8. [ACK] д�Ĵ���������Ϊ WRITEREG_ACK_MSG������n��д�����ʱ�����ش�����Ϣ��֮����������ݶ�����
 *    ���������豸����֧�֡�
 ***************************************************/
#define MV_MAX_WRITEREG_INDEX      67
typedef struct _WRITEREG_ACK_MSG_
{
    unsigned short      nReserved;   // ��0
    unsigned short      nIndex;      // ��ʾ��n��0-66����д������������ȷ����67
} WRITEREG_ACK_MSG;

/***************************************************
 *  9. [CMD] ���ڴ棬����Ϊ READMEM_CMD_MSG
 *     flag�ֶ�˵����bit 0~2, ����,��0��bit 3, ����Ӧ����Ϣ�㲥��bit 7 ������1��
 *    ���������豸����֧�֡�
 ***************************************************/
typedef struct _READMEM_CMD_MSG_
{
    unsigned long       nMemAddress;    // 4bytes ����ĵ�ַ
    unsigned short      nReserved;      // ��0
    unsigned short      nMemLen;        // ��ȡ��byte��������4�ı�����
} READMEM_CMD_MSG;

/***************************************************
 * 10. [ACK] ���ڴ棬����Ϊ READMEM_ACK_MSG
 *    ���������豸����֧�֡�
 ***************************************************/
typedef struct _READMEM_ACK_MSG_
{
    unsigned long       nMemAddress;    // 4bytes ����ĵ�ַ
    unsigned char       chReadMemData[MV_GVCP_MAX_PAYLOAD_LEN]; // ��ȡ���ڴ�����
} READMEM_ACK_MSG;

/***************************************************
 * 11. [CMD] д�ڴ棬����Ϊ WRITEMEM_CMD_MSG
 *     flag�ֶ�˵����bit 0~2, ����,��0��bit 3, ����Ӧ����Ϣ�㲥��
 *    ���������豸����֧�֡�
 ***************************************************/
typedef struct _WRITEMEM_CMD_MSG_
{
    unsigned long       nMemAddress;    // 4bytes ����ĵ�ַ
    unsigned char       chWriteMemData[MV_GVCP_MAX_PAYLOAD_LEN]; // ��д���ڴ�����
} WRITEMEM_CMD_MSG;

/***************************************************
 * 12. [ACK] д�ڴ棬����Ϊ WRITEMEM_ACK_MSG
 *    ���������豸����֧�֡�
 ***************************************************/
typedef struct _WRITEMEM_ACK_MSG_
{
    unsigned short      nReserved;   // ��0
    unsigned short      nIndex;      // �ɹ�������д����������ʧ�ܣ���ʾ��n��0-535����д�����
} WRITEMEM_ACK_MSG;


/***************************************************
 * 13. [CMD] �ط�������Ϊ PACKETRESEND_CMD_MSG
 *     flag�ֶ�˵����bit 0~2, ����,��0��
 *                   bit 3, -- ��1����ʾ block_id ʹ��64bits�� packet_id ʹ��32bits
 *                          -- ��0����ʾ block_id ʹ��16bits�� packet_id ʹ��24bits
 *    ���������豸ѡ����֧�֡�MV_REG_GVCPCapability(0x0934) �� value_bit29 ��1ʱ֧�֡�
 ***************************************************/
typedef struct _PACKETRESEND_CMD_MSG_
{
    unsigned short      nStreamChannelIdx;   // ��ͨ�������

    /*
     * ���flag��bit3��0�����ֶα�ʾ block_id����ʱ���ֶβ�������0��
     * ���flag��bit3��1�����ֶα�����0
     */
    unsigned short      nBlockId;

    /*
     * ���flag��bit3��0����ʹ�õ�24bits����8bits��0��
     * ���flag��bit3��1��32bits ��ʹ��
     */
    unsigned int        nFirstPacketId;

    /*
     * last >= first��
     * ���flag��bit3��0����ʹ�õ�24bits����8bits��0�����lastΪ 0xffffff���������а�
     * ���flag��bit3��1��32bits ��ʹ�ã����lastΪ 0xffffffff���������а�
     */
    unsigned int        nLastPacketId;

    // ����flag��bit3��1���Ű��������ֶ�
    unsigned int        nBlockIdHigh;
    unsigned int        nBlockIdLow;
} PACKETRESEND_CMD_MSG;

/***************************************************
 * 14. [ACK] �ط���û�ж������Ϣ����
 ***************************************************/

/***************************************************
 * 15. [ACK] �ȴ�������Ϊ PENDING_ACK_MSG
 *    ���������豸ѡ����֧�֡�MV_REG_PendingTimeout(0x0958)
 ***************************************************/
typedef struct _PENDING_ACK_MSG_
{
    unsigned short      reserved;               // ����Ϊ0
    unsigned short      time_to_completion;     // ��λΪms

} PENDING_ACK_MSG;

/***************************************************
 * 16. [CMD] �ط�������Ϊ ACTION_CMD_MSG
 *     flag�ֶ�˵����bit 1~3, ����,��0��
 *                   bit 0, -- ��1����ʾ ���� action_time �ֶ�
 *                          -- ��0����ʾ ������ action_time �ֶ�
 *    ���������豸ѡ����֧�֡�MV_REG_GVCPCapability(0x0934) �� value_bit25 ��1ʱ֧�֡�
 ***************************************************/
typedef struct _ACTION_CMD_MSG_
{
    unsigned int        nDeviceKey;               //
    unsigned int        nGroupKey;
    unsigned int        nGroupMask;

    // ��flag��bit0��1ʱ���Ű��������ֶ�
    unsigned int        nActionTimeHigh;
    unsigned int        nActionTimeLow;
} ACTION_CMD_MSG;

/**************************************************
 * 17. [CMD] �ط�������Ϊ EVENT_CMD_MSG
 *      flag�ֶ�˵����bit 0~2, ����,��0��
 *                    bit 3, -- ��1����ʾ block_id ʹ��64bits�� packet_id ʹ��32bits
 *                           -- ��0����ʾ block_id ʹ��16bits�� packet_id ʹ��24bits
 *    ���������豸ѡ����֧�֡�MV_REG_GVCPCapability(0x0934) �� value_bit31 ��1ʱ֧�֡�
 ***************************************************/
// note: �����ṹ��ʹ��ʱ�Ǹ��б�
typedef struct _EVENT_CMD_MSG_
{
    unsigned short      reserved;
    unsigned short      event_identifier;
    unsigned short      stream_channel_index;

    /*
     * ���flag��bit3��0�����ֶα�ʾ block_id����ʱ���ֶβ�������0��
     * ���flag��bit3��1�����ֶα�����0
     */
    unsigned short      block_id;

    // ����flag��bit3��1���Ű�������2���ֶ�
    unsigned int        block_id_high;
    unsigned int        block_id_low;

    unsigned int        timestamp_high;
    unsigned int        timestamp_low;
} EVENT_CMD_MSG;

/***************************************************
 * 18. [CMD] �ط�������Ϊ EVENTDATA_CMD_MSG
 *       flag�ֶ�˵����bit 0~2, ����,��0��
 *                   bit 3, -- ��1����ʾ block_id ʹ��64bits�� packet_id ʹ��32bits
 *                          -- ��0����ʾ block_id ʹ��16bits�� packet_id ʹ��24bits
 *    ���������豸ѡ����֧�֡�
 ***************************************************/
typedef struct _EVENTDATA_CMD_MSG_
{
    unsigned short      nReserved;
    unsigned short      nEventId;
    unsigned short      nStreamChannelIdx;

    /*
     * ���flag��bit3��0�����ֶα�ʾ block_id����ʱ���ֶβ�������0��
     * ���flag��bit3��1�����ֶα�����0
     */
    unsigned short      nBlockId;

    // ����flag��bit3��1���Ű�������2���ֶ�
    unsigned int        nBlockIdHigh;
    unsigned int        nBlockIdLow;

    unsigned int        nTimeStampHigh;
    unsigned int        nTimeStampLow;
} EVENTDATA_CMD_MSG;

#define ExclusivePrivilege                                      1
#define ExclusivePrivilegeWithSwitchoverKey                     2
#define ControlPrivilege                                        3
#define ControlPrivilegeWithSwitchoverKey                       4
#define ControlSwitchoverEnablePrivilege                        5
#define ControlSwitchoverEnablePrivilegeWithSwitchoverKey       6
#define MonitorPrivilege                                        7

#endif  // __MV_GVCP_DEFINE_H__
