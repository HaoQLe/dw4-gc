#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DC090();
void fn_802DC0DC();
void fn_802DC37C();
extern char lbl_804205D4[];
extern char lbl_804D2414[];
extern char lbl_8053543C[];
extern void *lbl_80535440;
void fn_802DC178();
void *fn_802DC1EC();
}
extern "C" {
void fn_802DC150(){
 fn_80066188((int)fn_802DC178);
}
void fn_802DC178(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053543C,(int)fn_8002907C,(int)fn_80024180,(int)fn_802DC1EC,(int)lbl_804205D4,20,(int)fn_802DC0DC,0,0,(int)lbl_804D2414);
}
void *fn_802DC1EC(){return fn_802DC090();}
void *fn_802DC20C(void *object){
 fn_802DC37C();
 return fn_8006546C(lbl_80535440,object);
}
void *fn_802DC24C(){
 if(!lbl_80535440 || !(reinterpret_cast<unsigned int *>(lbl_80535440)[0x24/4]&4)) fn_802DC37C();
 return lbl_80535440;
}
}
#pragma pop
