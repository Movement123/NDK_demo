// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject1.h"
extern "C"{
 #include "a.h"
}


using namespace std;

int main()
{

	int i = 10;
	int& j = i;

	printf("i的地址：%#x ,j的地址：%#x \n" ,&i,&j);

	//test_c();
	//cout << "Hello CMake." << endl;

	system("pause");
	return 0;
}
