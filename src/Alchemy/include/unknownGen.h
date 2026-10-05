#ifndef UNKNOWNGEN_H
#define UNKNOWNGEN_H
#include <igCore/igStringPoolItem.h>
// Synthetic views shared by recovered metaobject boilerplate; meanings are unknown.
namespace Gap { namespace Core { class igArkCore; extern igArkCore *_arkCore; } }
struct UnknownGenString {
 const char *value;
 inline ~UnknownGenString(){if(value) reinterpret_cast<const Gap::Core::igStringPoolItem *>(value-8)->release();}
};
struct UnknownGenField { void *unknown00; unsigned int unknown04; int unknown08[5]; void *unknown1C; int unknown20[6]; int unknown38; void *unknown3C; };
class UnknownGenFactory { public:
 virtual void slot08(); virtual void slot0C(); virtual void slot10(); virtual void slot14(); virtual void slot18(); virtual void slot1C(); virtual void slot20(); virtual void slot24(); virtual void slot28(); virtual void slot2C(); virtual void slot30(); virtual void slot34(); virtual void slot38(); virtual void slot3C(); virtual void slot40(); virtual void slot44(); virtual void slot48(); virtual void slot4C(); virtual void slot50(); virtual UnknownGenField *slot54(int); };
class UnknownGenVirtual {
public:
 virtual void slot08();
 virtual void slot0C();
 virtual void slot10();
 virtual void slot14();
 virtual void slot18();
 virtual void slot1C();
 virtual void slot20();
 virtual void slot24(int);
 virtual void slot28();
 virtual void slot2C();
};
struct UnknownGenValue { void *unknown00; unsigned int unknown04; };
extern "C" void fn_80066E1C(void *);
inline void unknownGenDrop(UnknownGenValue *value){--value->unknown04;if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);}
#endif
