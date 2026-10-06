#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B5AF8();
void fn_802B5B44();
void fn_802B5D90();
extern char lbl_8041D2E0[];
extern char lbl_804CF140[];
extern char lbl_80534648[];
extern void *lbl_8053464C;
void fn_802B5BE0();
void *fn_802B5C54();
}
extern "C" {
void fn_802B5BB8(){
 fn_80066188((int)fn_802B5BE0);
}
void fn_802B5BE0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534648,(int)fn_8002907C,(int)fn_80024180,(int)fn_802B5C54,(int)lbl_8041D2E0,20,(int)fn_802B5B44,0,0,(int)lbl_804CF140);
}
void *fn_802B5C54(){return fn_802B5AF8();}
void *fn_802B5C74(){
 if(!lbl_8053464C || !(reinterpret_cast<unsigned int *>(lbl_8053464C)[0x24/4]&4)) fn_802B5D90();
 return lbl_8053464C;
}
}
#pragma pop
