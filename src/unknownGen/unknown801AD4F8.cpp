#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800321EC();
void *fn_80053998(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
extern char lbl_80560194[6];
extern void *lbl_80564754;
extern char lbl_80564758[4];
}
extern "C" {
void fn_801AD4F8(){
 void *meta=lbl_80564754;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_80560194));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_800321EC();
 field->unknown38=0;
 field->unknown1C=lbl_80564758;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
}
#pragma pop
