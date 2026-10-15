#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2InfoList_getMeta();
void beAction2InfoList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beAction2Info_arkRegister();
void igObjectList_register();
extern char beAction2InfoList_className[];
extern char beAction2InfoList_dependencies[];
extern char beAction2InfoList_meta[];
extern void *beAction2Info_meta;
void beAction2InfoList_register();
void *beAction2InfoList_getMetaCall();
}
extern "C" {
void beAction2InfoList_arkRegister(){
 meta_registerNow((int)beAction2InfoList_register);
}
void beAction2InfoList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beAction2InfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beAction2InfoList_getMetaCall,(int)beAction2InfoList_className,20,(int)beAction2InfoList_vtableRead,0,0,(int)beAction2InfoList_dependencies);
}
void *beAction2InfoList_getMetaCall(){return beAction2InfoList_getMeta();}
void *beAction2Info_getMeta(){
 if(!beAction2Info_meta || !(reinterpret_cast<unsigned int *>(beAction2Info_meta)[0x24/4]&4)) beAction2Info_arkRegister();
 return beAction2Info_meta;
}
}
#pragma pop
