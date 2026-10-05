#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284550();
void fn_80286F0C();
void fn_80402E28();
void *fn_804067A8();
void fn_804067F4();
void fn_804069B8();
extern char lbl_8046272C[];
extern char lbl_804F09A4[];
extern char lbl_8055C998[];
void fn_8040691C();
void *fn_80406998();
}
extern "C" {
void fn_804068F4(){
 fn_80066188((int)fn_8040691C);
}
void fn_8040691C(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C998,(int)fn_80286F0C,(int)fn_80284550,(int)fn_80406998,(int)lbl_8046272C,20,(int)fn_804067F4,(int)fn_804069B8,0,(int)lbl_804F09A4);
}
void *fn_80406998(){return fn_804067A8();}
}
#pragma pop
