#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDataObjListList_getMeta();
void beDataObjListList_vtableRead();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802DC150();
void igObjectList_register();
extern char lbl_804205C0[];
extern char lbl_804D240C[];
extern char lbl_80535438[];
extern void *lbl_8053543C;
extern void *lbl_805621F4;
void beDataObjListList_register();
void *beDataObjListList_getMetaCall();
}
extern "C" {
void fn_802DBF40(){
 fn_80066188((int)beDataObjListList_register);
}
void beDataObjListList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535438,(int)igObjectList_register,(int)fn_80024180,(int)beDataObjListList_getMetaCall,(int)lbl_804205C0,20,(int)beDataObjListList_vtableRead,0,0,(int)lbl_804D240C);
}
void *beDataObjListList_getMetaCall(){return beDataObjListList_getMeta();}
void *fn_802DBFFC(void *object){
 fn_802DC150();
 return fn_8006546C(lbl_8053543C,object);
}
void *fn_802DC03C(){
 if(!lbl_8053543C) lbl_8053543C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053543C;
}
void *beDataObjList_getMeta(){
 if(!lbl_8053543C || !(reinterpret_cast<unsigned int *>(lbl_8053543C)[0x24/4]&4)) fn_802DC150();
 return lbl_8053543C;
}
}
#pragma pop
