#ifndef CLAN_H_
#define CLAN_H_

/************************************************************************
| $Id: clan.h,v 1.3 2002/06/20 21:39:49 pirahna Exp $
| clan.h
| Description:  Header information for clans.
*/

void clan_login(char_data * ch);
void clan_logout(char_data * ch);
int has_right(char_data * ch, uint64 bit);

#define CLAN_RIGHTS_ACCEPT       1
#define CLAN_RIGHTS_OUTCAST      1<<1
#define CLAN_RIGHTS_B_READ       1<<2
#define CLAN_RIGHTS_B_WRITE      1<<3
#define CLAN_RIGHTS_B_REMOVE     1<<4
#define CLAN_RIGHTS_MEMBER_LIST  1<<5
#define CLAN_RIGHTS_RIGHTS       1<<6
#define CLAN_RIGHTS_MESSAGES     1<<7
#define CLAN_RIGHTS_INFO         1<<8
// if you add to the clan rights, update clan_rights[] in clan.C


struct clan_room_data
{
   int32 room_number;
  struct clan_room_data * next;
};

struct clan_member_data
{
  char * member_name;
  uint64 member_rights;
   int64 member_rank;
  
   int64 unused1;
   int64 unused2;
  uint64 unused3;
  char * unused4; // this is saved as a variable length string
  
  //  I'd like to put "time joined" here for CC purposes
  uint64  time_joined;

  struct clan_member_data * next;
};

struct clan_data
{
  char leader[20];
  char founder[20];
  char name[30];
  char * email;
  char * description;
  char * login_message;
  char * death_message;
  char * logout_message;

  uint16 number;
  clan_room_data * rooms;
  clan_member_data * members;
  struct clan_data * next;
};

#endif /* CLAN_H_ */
