int Calculate(int num1, char ch, int num2)//计算运算式
{
	int result;
	switch (ch)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
	}
	return result;
}

int FAO()//计算运算式（四则运算）
{
	//定义栈
	Stack_OD datas;
	Stack_OP symbols;
	//初始化
	InitStack_OP(symbols);
	InitStack_OD(datas);
	push_OP(symbols,'\n');//将回车存入栈底

}
