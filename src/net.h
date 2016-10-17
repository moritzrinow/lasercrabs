#pragma once

#include "types.h"
#include "data/array.h"
#include "vi_assert.h"

namespace VI
{

struct Entity;
struct Awk;

namespace Sock
{
	struct Address;
}

namespace Net
{

struct StreamRead;
struct StreamWrite;

// borrows heavily from https://github.com/networkprotocol/libyojimbo

enum class MessageType
{
	Noop,
	EntityCreate,
	EntityRemove,
	Awk,
	count,
};

#define MAX_PACKET_SIZE 2000

b8 init();
void update(const Update&);
b8 finalize(Entity*);
b8 remove(Entity*);

#if SERVER
namespace Server
{
}
#else
namespace Client
{
	void connect(const char*, u16);
}
#endif

void term();

StreamWrite* msg_new(MessageType);
b8 msg_finalize(StreamWrite*);
StreamWrite* msg_awk(Awk*);

}


}