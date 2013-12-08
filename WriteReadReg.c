/*
	函数名称：WriteSJARegBlock
	函数功能：连续写多个寄存器
	输入参数：RegAdr 寄存器起始地址
			 ValueBuf 写寄存器时的指针
			 len 要连续写入的寄存器数
	返回值：连续写入寄存器的数
*/

char WriteSJARegBlock(unsigned char RegAdr,unsigned char *ValueBuf,unsigned char len)
{
	unsigned char i;
	if(len!=0)
	{
		for(i=0;i<len;i++)
		{
			WriteSJAReg(RegAdr+i,ValueBuf[i]);
		}
	}
	return len;
}



/*
	函数名称：ReadSJARegBlock
	函数功能：连续读多个寄存器
	输入参数：RegAdr 寄存器起始地址 
			 ValueBuf 读寄存器时的指针
			 len  要连续读取的寄存器数
	输出参数：无
	返回值：连续读到的寄存器数
*/

char ReadSJARegBlock(unsigned char RegAdr,unsigned char *ValueBuf,unsigned char len)
{
	unsigned char i;
	if(len!=0)
	{
		for(i=0;i<len;i++)
		{
			ValueBuf[i]=ReadSJAReg(RegAdr+i);
		}
	}
	return len;
}