#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beMessengerArgData_metaObject();
extern char beMessengerDelay_fieldTypes[];
extern char beMessengerDelay_fieldNames[];
extern char beMessengerDelay_fieldStorage[];
extern char beMessengerDelay_fieldOffsets[];
extern void *beMessengerDelay_meta;
}
extern "C" {
void beMessengerDelay_fieldInit(){
 void *value0=beMessengerDelay_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beMessengerDelay_fieldTypes,7);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value3=beMessengerArgData_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beMessengerDelay_fieldNames,beMessengerDelay_fieldStorage,beMessengerDelay_fieldOffsets,value1);
}
}
#pragma pop
