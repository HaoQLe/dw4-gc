#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002D0F4();
void *fn_80053998(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
extern char lbl_80560B70[6];
extern void *lbl_805659C4;
extern char lbl_805659C8[4];
}
extern "C" {
void fn_802167DC(){
 void *meta=lbl_805659C4;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_80560B70));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8002D0F4();
 field->unknown38=0;
 field->unknown1C=lbl_805659C8;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
}
#pragma pop
