#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void beLuaInfo_registerNow();
extern char lbl_804D1818[];
extern char lbl_804D181C[];
extern char lbl_804D1820[];
extern char lbl_804D1824[];
extern void *beLuaState_meta;
extern void *beLuaInfo_meta;
}
extern "C" {
void beLuaState_fieldInit(){
 void *meta=beLuaState_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1818,0x1);
 fn_800659C0(meta,lbl_804D181C,lbl_804D1820,lbl_804D1824,field);
}
void *beLuaInfo_getMeta(){
 if(!beLuaInfo_meta || !(reinterpret_cast<unsigned int *>(beLuaInfo_meta)[0x24/4]&4)) beLuaInfo_registerNow();
 return beLuaInfo_meta;
}
}
#pragma pop
