//SJA1000寄存器地址
#define REG_CAN_MOD 0xA000 //内部控制寄存器
#define REG_CAN_CMR 0xA001 //命令寄存器
#define REG_CAN_SR  0xA002 //状态寄存器
#define REG_CAN_IR  0xA003 //中断寄存器


//读写寄存器
#define REG_BASE_ADDR 0xA000 //寄存器基址
xdata unsigned char *SJA_CS_Point = (xdata unsigned char *)REG_BASE_ADDR;
//定义SJA_CS_Point为指向外部存储器的指针，通过指针访问SJA1000的寄存器


//写SJA1000寄存器
void WriteSJAReg(unsigned char RegAddr,unsigned char Value)
{
	*(SJA_CS_Point+RegAddr) = Value;
	return;
	//通过指针向指定地址（SJA1000的寄存器）写入数据
}

//读SJA1000寄存器
unsigned char ReadSJAReg(unsigned char RegAddr)
{
	return(*(SJA_CS_Point+RegAddr));
	//通过指针向指定地址（SJA1000的寄存器）读取数据
}

