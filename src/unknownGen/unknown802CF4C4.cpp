#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMessengerArgDataList_getMeta();
void beMessengerArgDataList_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beMessengerArgData_arkRegister();
void igObjectList_register();
extern char beMessengerArgDataList_className[];
extern char beMessengerArgDataList_dependencies[];
extern char beMessengerArgDataList_meta[];
extern void *beMessengerArgData_meta;
extern void *lbl_805621F4;
void beMessengerArgDataList_register();
void *beMessengerArgDataList_getMetaCall();
}
extern "C" {
void beMessengerArgDataList_arkRegister(){
 meta_registerNow((int)beMessengerArgDataList_register);
}
void beMessengerArgDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMessengerArgDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beMessengerArgDataList_getMetaCall,(int)beMessengerArgDataList_className,20,(int)beMessengerArgDataList_vtableRead,0,0,(int)beMessengerArgDataList_dependencies);
}
void *beMessengerArgDataList_getMetaCall(){return beMessengerArgDataList_getMeta();}
void *beMessengerArgData_create(void *object){
 beMessengerArgData_arkRegister();
 return meta_createInstance(beMessengerArgData_meta,object);
}
void *beMessengerArgData_metaObject(){
 if(!beMessengerArgData_meta) beMessengerArgData_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMessengerArgData_meta;
}
void *beMessengerArgData_getMeta(){
 if(!beMessengerArgData_meta || !(reinterpret_cast<unsigned int *>(beMessengerArgData_meta)[0x24/4]&4)) beMessengerArgData_arkRegister();
 return beMessengerArgData_meta;
}
}
#pragma pop
