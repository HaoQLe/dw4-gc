#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void beCriHandleList_registerNow();
void *fn_802F7294();
extern char lbl_804D2628[];
extern char lbl_804D2638[];
extern char lbl_804D2648[];
extern char lbl_804D2658[];
extern void *beCriSfpData_meta;
extern void *beCriHandleList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void beCriSfpData_fieldInit(){
 void *meta=beCriSfpData_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2628,0x4);
 fn_800659C0(meta,lbl_804D2638,lbl_804D2648,lbl_804D2658,field);
}
void *fn_802DEB14(){return fn_802F7294();}
void *beCriHandleList_metaObject(){
 if(!beCriHandleList_meta) beCriHandleList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beCriHandleList_meta;
}
void *beCriHandleList_getMeta(){
 if(!beCriHandleList_meta || !(reinterpret_cast<unsigned int *>(beCriHandleList_meta)[0x24/4]&4)) beCriHandleList_registerNow();
 return beCriHandleList_meta;
}
}
#pragma pop
