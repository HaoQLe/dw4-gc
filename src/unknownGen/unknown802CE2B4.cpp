#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *beMessengerWorkList_metaObject();
void *beMessengerGroupList_metaObject();
void *beMessengerDelayList_metaObject();
void *beMessengerArgDataList_metaObject();
void *beMessengerArgData_metaObject();
extern char lbl_804D1364[];
extern char lbl_804D1384[];
extern char lbl_804D13A4[];
extern char lbl_804D13C4[];
extern void *beMessenger_meta;
}
extern "C" {
void beMessenger_fieldInit(){
 void *value0=beMessenger_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1364,8);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beMessengerArgData_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beMessengerGroupList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beMessengerWorkList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=beMessengerDelayList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value11=beMessengerArgDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 fn_800659C0(value0,lbl_804D1384,lbl_804D13A4,lbl_804D13C4,value1);
}
}
#pragma pop
