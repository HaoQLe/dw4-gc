#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E4E38();
void fn_802E4E84();
void fn_802E50E4();
extern char lbl_80420E80[];
extern char lbl_804D2EAC[];
extern char lbl_80535744[];
extern void *lbl_80535748;
void fn_802E4F20();
void *fn_802E4F94();
}
extern "C" {
void fn_802E4EF8(){
 fn_80066188((int)fn_802E4F20);
}
void fn_802E4F20(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535744,(int)fn_8002907C,(int)fn_80024180,(int)fn_802E4F94,(int)lbl_80420E80,20,(int)fn_802E4E84,0,0,(int)lbl_804D2EAC);
}
void *fn_802E4F94(){return fn_802E4E38();}
void *fn_802E4FB4(){
 if(!lbl_80535748 || !(reinterpret_cast<unsigned int *>(lbl_80535748)[0x24/4]&4)) fn_802E50E4();
 return lbl_80535748;
}
}
#pragma pop
