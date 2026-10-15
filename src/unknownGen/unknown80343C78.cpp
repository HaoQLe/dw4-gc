#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *beMessenger_metaObject();
void *beDataObjList_metaObject();
void *beDataBase_metaObject();
void *beNDMWShinkaObjectList_metaObject();
void *beNDMWGameRam_metaObject();
extern char lbl_804E3DA0[];
extern char lbl_804E3DB8[];
extern char lbl_804E3DD0[];
extern char lbl_804E3DE8[];
extern void *beNDMWShinkaCtrl_meta;
}
extern "C" {
void beNDMWShinkaCtrl_fieldInit(){
 void *value0=beNDMWShinkaCtrl_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E3DA0,6);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beMessenger_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beNDMWGameRam_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value7=beDataObjList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value9=beDataBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value11=beNDMWShinkaObjectList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 fn_800659C0(value0,lbl_804E3DB8,lbl_804E3DD0,lbl_804E3DE8,value1);
}
}
#pragma pop
