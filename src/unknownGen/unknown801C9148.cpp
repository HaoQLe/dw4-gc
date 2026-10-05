#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801C8F4C();
void fn_801C8F88();
void fn_801C9208();
extern char lbl_804B19BC[];
extern char lbl_804B19D4[];
extern void *lbl_80565388;
void fn_801C9170();
void *fn_801C91E8();
}
extern "C" {
void fn_801C9148(){
 fn_80066188((int)fn_801C9170);
}
void fn_801C9170(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565388,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801C91E8,(int)lbl_804B19D4,32,(int)fn_801C8F88,(int)fn_801C9208,0,(int)lbl_804B19BC);
}
void *fn_801C91E8(){return fn_801C8F4C();}
}
#pragma pop
