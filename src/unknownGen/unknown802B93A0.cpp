#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *bePlaySEList_getMeta();
void bePlaySEList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B9530();
void igObjectList_register();
extern char lbl_8041D850[];
extern char lbl_804CF634[];
extern char lbl_80534784[];
extern void *lbl_80534788;
void bePlaySEList_register();
void *bePlaySEList_getMetaCall();
}
extern "C" {
void fn_802B93A0(){
 fn_80066188((int)bePlaySEList_register);
}
void bePlaySEList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534784,(int)igObjectList_register,(int)fn_80024180,(int)bePlaySEList_getMetaCall,(int)lbl_8041D850,20,(int)bePlaySEList_vtableRead,0,0,(int)lbl_804CF634);
}
void *bePlaySEList_getMetaCall(){return bePlaySEList_getMeta();}
void *fn_802B945C(void *object){
 fn_802B9530();
 return fn_8006546C(lbl_80534788,object);
}
void *bePlaySE_getMeta(){
 if(!lbl_80534788 || !(reinterpret_cast<unsigned int *>(lbl_80534788)[0x24/4]&4)) fn_802B9530();
 return lbl_80534788;
}
}
#pragma pop
