#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void igFileNameList_registerNow();
extern char lbl_804CD950[];
extern char lbl_804CD958[];
extern char lbl_804CD960[];
extern char lbl_804CD968[];
extern void *igAdxAfsFile_meta;
extern void *igFileNameList_meta;
}
extern "C" {
void igAdxAfsFile_fieldInit(){
 void *meta=igAdxAfsFile_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CD950,0x2);
 fn_800659C0(meta,lbl_804CD958,lbl_804CD960,lbl_804CD968,field);
}
void *igFileNameList_getMeta(){
 if(!igFileNameList_meta || !(reinterpret_cast<unsigned int *>(igFileNameList_meta)[0x24/4]&4)) igFileNameList_registerNow();
 return igFileNameList_meta;
}
}
#pragma pop
