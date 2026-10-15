#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWItemDisk_metaObject();
void *beNDMWItemBaseList_metaObject();
extern char lbl_804E1E94[];
extern char lbl_804E1EAC[];
extern char lbl_804E1EC4[];
extern char lbl_804E1EDC[];
extern void *beNDMWStatusCtrlDisk_meta;
}
extern "C" {
void beNDMWStatusCtrlDisk_fieldInit(){
 void *value0=beNDMWStatusCtrlDisk_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1E94,6);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value5=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value7=beNDMWItemDisk_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 meta_setupFields(value0,lbl_804E1EAC,lbl_804E1EC4,lbl_804E1EDC,value1);
}
}
#pragma pop
