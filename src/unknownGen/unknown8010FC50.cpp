#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010F4FC();
void *fn_8010F9EC();
void fn_8010FA28();
void fn_8010FD10();
void fn_80112DF0();
extern char lbl_80494B44[];
extern char lbl_80494B60[];
extern void *lbl_8056366C;
void fn_8010FC78();
void *fn_8010FCF0();
}
extern "C" {
void fn_8010FC50(){
 fn_80066188((int)fn_8010FC78);
}
void fn_8010FC78(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056366C,(int)fn_80112DF0,(int)fn_8010F4FC,(int)fn_8010FCF0,(int)lbl_80494B60,36,(int)fn_8010FA28,(int)fn_8010FD10,0,(int)lbl_80494B44);
}
void *fn_8010FCF0(){return fn_8010F9EC();}
}
#pragma pop
