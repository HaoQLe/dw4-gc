#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80295250();
extern char lbl_80516A74[];
void memset(int,int,int);
}
extern "C" {
void fn_80290FC8(){
 memset((int)lbl_80516A74,0,2688);
}
void fn_80290FF8(){
 fn_80295250();
 memset((int)lbl_80516A74,0,2688);
}
}
#pragma pop
