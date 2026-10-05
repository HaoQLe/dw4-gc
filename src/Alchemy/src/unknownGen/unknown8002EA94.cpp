#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void fn_80029D58();
void *fn_8002E9C0();
void fn_8002E9FC();
void fn_8002EB4C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_8055D3EC[8];
extern char lbl_8055D3F4[7];
extern void *lbl_805619F8;
void fn_8002EABC();
void *fn_8002EB2C();
}
extern "C" {
void fn_8002EA94(){
 fn_80066188((int)fn_8002EABC);
}
void fn_8002EABC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805619F8,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_8002EB2C,(int)lbl_8055D3F4,20,(int)fn_8002E9FC,(int)fn_8002EB4C,0,(int)lbl_8055D3EC);
}
void *fn_8002EB2C(){return fn_8002E9C0();}
}
#pragma pop
