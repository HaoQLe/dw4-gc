#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010EE6C();
void fn_8010F21C();
void fn_80402E28();
void *fn_80405D10();
void fn_80405D5C();
void fn_80405FB8();
extern char lbl_804623BC[];
extern char lbl_804F0628[];
extern char lbl_8055C8D4[];
void fn_80405F1C();
void *fn_80405F98();
}
extern "C" {
void fn_80405EF4(){
 fn_80066188((int)fn_80405F1C);
}
void fn_80405F1C(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C8D4,(int)fn_8010F21C,(int)fn_8010EE6C,(int)fn_80405F98,(int)lbl_804623BC,264,(int)fn_80405D5C,(int)fn_80405FB8,0,(int)lbl_804F0628);
}
void *fn_80405F98(){return fn_80405D10();}
}
#pragma pop
