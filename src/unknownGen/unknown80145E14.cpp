#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053998(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void *fn_8014612C();
extern char lbl_8055F4B4[6];
extern void *lbl_80564168;
extern char lbl_8056416C[4];
}
extern "C" {
void fn_80145E14(){
 void *meta=lbl_80564168;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055F4B4));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8014612C();
 field->unknown38=0;
 field->unknown1C=lbl_8056416C;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
}
#pragma pop
