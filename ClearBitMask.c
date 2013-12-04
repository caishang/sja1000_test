/*
	函数名称：ClearBitMask
	函数功能：将指定寄存器的指定位清除
	输入函数：RegAdr 寄存器地址	BitValue 设置的位值
	输出参数：无
	返回值： 1=成功 0=失败
*/

char ClearBitMask(unsigned char RegAdr,unsigned char BitValue)
{
	char status = 0;
	unsigned char temp;
	temp = ReadSJAReg(RegAdr);
	temp = temp&(~BitValue);	//做与运算
	WriteSJAReg(RegAdr,temp);
	
	if(ReadSJAReg(RegAdr)==temp)
	{
		status=1;
	}
	else status=0;
	return(status);
}