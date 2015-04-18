int get_height(char* input[])
{
	int heights[100], i, j,k, cnt;
	
	i = j = 0;
	
	while (input[i][0] >= '4' && input[i][0] <= '7')
	{
		int ht = 12 * (input[i][0] - '0' );
		
		if (input[i][1] != '#')
		{
			return -1;
		}
		if (input[i][2] < '0' || input[i][2] > '9')
		{
			return -1;
		}
		if (input[i][3] == '0' )
		{
			if (input[i][2] != '1')
				return -1;
			ht += 10;
		}
		else if (input[i][3] == '1')
		{
			if (input[i][2] != '1')
			{
				return -1;
			}
			ht += 11;
		}
		else
		{
			ht += input[i][2] - '0';
		}
		heights[j++] = ht;
		i++;
	}
	cnt = 0;
	for (i = 0; i < j-1 ; ++i)
	{
		for (k = i+1; k < j; k++)
		{
			if (heights[i] > heights[k])
			{
				cnt++;
			}
		}
	}
	return cnt;

}
