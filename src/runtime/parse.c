#include "parser.h"
#include <regex.h>


Any parse(String code, Array context) {
    // ��ȡ�ո�õ�ʵ��
}

/**
* 1.�ؼ��֣��ø�ʽ����ϱ�ʶ����������
������var/new/function
���ͣ�instranceof/typeof
������if/else
ɸѡ��switch/case/default
ռλ��void
ѭ����for/while/do/in/of/continue
���أ�break/return
�쳣��try/catch/finally/throw
��ֵ��this/with
ɾ����delete
* 2.��ʶ����������ĸ�»���
* 3.�����������ֻ��ַ���
*/


char* regexp__identifier = "^[a-zA-Z_]+?[a-zA-Z_0-9]+$";



Any parseImmediate(String text) {
    char sign = text->charArray[0];
    Number number = __Number__construct__int(0);

    /*regex_t reg =

    for (int i=0; i<text->length; i++) {
        char c = text->charArray[i];
        if (c>='0'&&c<='9') {
            // ����
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
