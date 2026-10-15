#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLayerGroupList_getMeta();
void beLayerGroupList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beLayerGroup_arkRegister();
void igObjectList_register();
extern char beLayerGroupList_className[];
extern char beLayerGroupList_dependencies[];
extern char beLayerGroupList_meta[];
extern void *beLayerGroup_meta;
void beLayerGroupList_register();
void *beLayerGroupList_getMetaCall();
}
extern "C" {
void beLayerGroupList_arkRegister(){
 meta_registerNow((int)beLayerGroupList_register);
}
void beLayerGroupList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLayerGroupList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beLayerGroupList_getMetaCall,(int)beLayerGroupList_className,20,(int)beLayerGroupList_vtableRead,0,0,(int)beLayerGroupList_dependencies);
}
void *beLayerGroupList_getMetaCall(){return beLayerGroupList_getMeta();}
void *beLayerGroup_getMeta(){
 if(!beLayerGroup_meta || !(reinterpret_cast<unsigned int *>(beLayerGroup_meta)[0x24/4]&4)) beLayerGroup_arkRegister();
 return beLayerGroup_meta;
}
}
#pragma pop
