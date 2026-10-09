#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMessengerArgDataList_getMeta();
void beMessengerArgDataList_vtableRead();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CF8E8();
void igObjectList_register();
extern char lbl_8041F810[];
extern char lbl_804D1520[];
extern char lbl_80535038[];
extern void *lbl_8053503C;
extern void *lbl_805621F4;
void beMessengerArgDataList_register();
void *beMessengerArgDataList_getMetaCall();
}
extern "C" {
void fn_802CF4C4(){
 fn_80066188((int)beMessengerArgDataList_register);
}
void beMessengerArgDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535038,(int)igObjectList_register,(int)fn_80024180,(int)beMessengerArgDataList_getMetaCall,(int)lbl_8041F810,20,(int)beMessengerArgDataList_vtableRead,0,0,(int)lbl_804D1520);
}
void *beMessengerArgDataList_getMetaCall(){return beMessengerArgDataList_getMeta();}
void *fn_802CF580(void *object){
 fn_802CF8E8();
 return fn_8006546C(lbl_8053503C,object);
}
void *fn_802CF5C0(){
 if(!lbl_8053503C) lbl_8053503C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053503C;
}
void *beMessengerArgData_getMeta(){
 if(!lbl_8053503C || !(reinterpret_cast<unsigned int *>(lbl_8053503C)[0x24/4]&4)) fn_802CF8E8();
 return lbl_8053503C;
}
}
#pragma pop
