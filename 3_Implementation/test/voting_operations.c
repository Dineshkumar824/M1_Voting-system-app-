#include "unity.h"
#include<voting_operations.h>


#include<voting_operations.h>
#define "Voting_system"

void test_castvote(void);
void test_votescount(void);
void test_leadingCandidate(void);


int main(){
  UNITY_BEGIN():
  RUN_TEST(test_castvote);
  RUN_TEST(test_votescount);
  RUN_TEST(test_LeadingCandidate);
  
  return UNITY_END();
}

void test_castvote(void);
{
  TEST_ASSERT_EQUAL(2,switch(choice):case2);
}

void test_votescount(void);
{
  TEST_ASSERT_EQUAL(2,votecount,party_no_1);
}


void test_leadingCandidate(void);
{
  TEST_ASSERT_EQUAL(party_no_2);
}


