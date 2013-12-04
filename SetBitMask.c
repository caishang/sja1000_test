/×
	函数名称：SetBitMask
	函数功能：设置指定寄存器的特定位为1
	输入参数：RegAdr:寄存器地址 BitValue:设置的位值
	输出参数：无
	返回值：1=成功0=失败
×/
char SetBitMask(unsigned char RegAdr,unsigned char BitValue)
{
	char status = 0;
	unsigned char temp;
	temp = ReadSJAReg(RegAdr);
	temp = temp|BitValue;	//置1为或运算
	WriteSJAReg(RegAdr,temp);
	
	//判断置位成功与否
	if(ReadSJAReg(RegAdr)==temp)
	{
		status=1;
	}
	else status=0;
	return (status);
}