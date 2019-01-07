#include "parser.h"
#include <regex.h>


Any parse(String code, Array context) {
    // 截取空格得到实体
}

/**
* 1.关键字：用格式来组合标识符或立即数
创建：var/new/function
类型：instranceof/typeof
条件：if/else
筛选：switch/case/default
占位：void
循环：for/while/do/in/of/continue
返回：break/return
异常：try/catch/finally/throw
特值：this/with
删除：delete
* 2.标识符：数字字母下划线
* 3.立即数：数字或字符串
*/


char* regexp__identifier = "^[a-zA-Z_]+?[a-zA-Z_0-9]+$";



Any parseImmediate(String text) {
    char sign = text->charArray[0];
    Number number = __Number__construct__int(0);

    /*regex_t reg =

    for (int i=0; i<text->length; i++) {
        char c = text->charArray[i];
        if (c>='0'&&c<='9') {
            // 数字
            c=c-'0';
            __Number__construct();
            __Number__multiplication(number, 10);
            __Number__addition(number, );
        }
    }*/
    return number;
}

Any entity(String code, Array context) {

}
