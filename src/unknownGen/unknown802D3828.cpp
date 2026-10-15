#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLayerGroup_getMeta();
void beLayerGroup_vtableRead();
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beLayerCtl_registerNow();
void igNamedObject_register();
extern char lbl_8041CD10[];
extern char beLayerGroup_className[];
extern char lbl_8041FBD8[];
extern char lbl_804D1924[];
extern char lbl_804D1938[];
extern char lbl_804D194C[];
extern char lbl_804D1964[];
extern char beLayerGroup_meta[];
extern void *lbl_80535160;
extern void *lbl_80535164;
extern void *beLayerCtl_meta;
extern void *lbl_805621F4;
void beLayerGroup_register();
void *beLayerGroup_getMetaCall();
}
extern "C" {
void beLayerGroup_registerNow(){
 meta_registerNow((int)beLayerGroup_register);
}
void beLayerGroup_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLayerGroup_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beLayerGroup_getMetaCall,(int)beLayerGroup_className,12,(int)beLayerGroup_vtableRead,0,0,0);
}
void *beLayerGroup_getMetaCall(){return beLayerGroup_getMeta();}
void *fn_802D38DC(){
 if(!lbl_80535160) lbl_80535160=fn_800635C8(lbl_8041FBD8,lbl_804D1924,lbl_804D1938,0x5);
 return lbl_80535160;
}
void *fn_802D393C(){
 if(!lbl_80535164) lbl_80535164=fn_800635C8(lbl_8041CD10,lbl_804D194C,lbl_804D1964,0x6);
 return lbl_80535164;
}
void *beLayerCtl_create(void *object){
 beLayerCtl_registerNow();
 return meta_createInstance(beLayerCtl_meta,object);
}
void *beLayerCtl_metaObject(){
 if(!beLayerCtl_meta) beLayerCtl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beLayerCtl_meta;
}
void *beLayerCtl_getMeta(){
 if(!beLayerCtl_meta || !(reinterpret_cast<unsigned int *>(beLayerCtl_meta)[0x24/4]&4)) beLayerCtl_registerNow();
 return beLayerCtl_meta;
}
}
#pragma pop
