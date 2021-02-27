#include "bianyi.h"
void match(int tk) {
    if(token == ')'){   ///////////////////////////////////////////
        b_token = token;//记住')'标记的位置。
        b_token2 = 0;   //
    }                   //之所以需要两个变量，是因为此时token的位置已经
    if(token == ';'){   //在return 后面的分号那里了，我们需要知道上一个分号 
        b_token2++;     //之前是否有右括号。例如 if(1);return;和if(1)return;
    }                   //如果return 前面还有一个';'标记，说明return
    if(b_token2 == 2){  //是单独的一条语句，这条语句必然执行，那么
        b_token = 0;    //它后面一直到'}'之前的语句都不会被执行
    }                   /////////////////////////////////////////////
    if (token == tk) {     
                            //如果遇到的标记是我们预想的标记，则取下一个标记
        next();             //否则报错退出
    } else {
        printf("%d: expected token: %d\n", line, tk);
        exit(-1);
    }
}
