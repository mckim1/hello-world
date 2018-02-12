/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


// 복소수 2개를 더하는 함수를 만들고 싶다.

void Add(int xr, int xi, int yr, int yi,//in parameter
		 int* sr, int* si ) // out parameter
{
	*sr = xr + yr;
	*si = xi + yi;

}

int main()
{
	int ar = 1, ai = 1; // 1 + 1i
	int br = 2, bi = 2; // 2 + 2i
	int sr, si;

	Add(ar, ai, br, bi, &sr, &si);

}
