//
//  BPlusTreeTests.cpp
//  
//
//  Created by Ferents Danila.
//
#include <iostream>
#include <cstdlib>
#include <vector>
#include "gtest/gtest.h"
#include "BPlusTree.cpp"
using namespace BPlusTreeN;
namespace  
{
	// template struct Node<int,int>;
	// template class BPlusTree<int,int>;
    TEST(TestsBinarySearchTree,TestIntersection0)
    {
		BPlusTree<int,int> *ourtree = new BPlusTree<int,int>(2);
		ourtree->insert(1,5);
		ourtree->insert(2,6);
		ourtree->insert(5,7);
		ourtree->insert(9,11);
		ourtree->print(0,ourtree->getroot());
		std::vector<int> answersk={5,1,2,5,9};
		std::vector<int> answersv={7,5,6,7,11};
		size_t k=0;
		ASSERT_EQ((ourtree->getroot()->getkeys())[0], answersk[k]);
		// ASSERT_EQ((ourtree->getroot()->getvalues())[0], answersv[k]);
		k++;
		for (int i = 0; i <=ourtree->getroot()->getkey_num(); ++i)
		{
			if((ourtree->getroot()->getchilds()[i])) 
			{
				for (int j = 0; j < ourtree->getroot()->getchilds()[i]->getkey_num(); ++j)
				{
					if (ourtree->getroot()->getchilds()[i]->getkeys()) 
					{
						ASSERT_EQ(((ourtree->getroot()->getchilds()[i]->getkeys())[j]), answersk[k]);
						if(ourtree->getroot()->getchilds()[i]->getleaf()) ASSERT_EQ(((ourtree->getroot()->getchilds()[i]->getvalues())[j]), answersv[k]);
						k++;
					}
				}
			}
		}
		delete ourtree;
		ourtree->print(0,ourtree->getroot());
	}
	// TEST(TestsBinarySearchTree,TestIntersection1)
 //    {
	// 	BPlusTree<char,int> *ourtree = new BPlusTree<char,int>(2);
	// 	ourtree->insert('d',3);
	// 	ourtree->insert('c',6);
	// 	ourtree->insert('b',7);
	// 	ourtree->insert('a',11);
	// 	std::vector<int> answersk={'c','a','b','c','d'};
	// 	std::vector<int> answersv={6,11,7,6,3};
	// 	ourtree->print(0,ourtree->getroot());
	// 	size_t k=0;
	// 	ASSERT_EQ((ourtree->getroot()->getkeys())[0], answersk[k]);
	// 	// ASSERT_EQ((ourtree->getroot()->getvalues())[0], answersv[k]);
	// 	k++;
	// 	for (int i = 0; i <=ourtree->getroot()->getkey_num(); ++i)
	// 	{
	// 		if((ourtree->getroot()->getchilds()[i])) 
	// 		{
	// 			for (int j = 0; j < ourtree->getroot()->getchilds()[i]->getkey_num(); ++j)
	// 			{
	// 				if (ourtree->getroot()->getchilds()[i]->getkeys()) 
	// 				{
	// 					ASSERT_EQ(((ourtree->getroot()->getchilds()[i]->getkeys())[j]), answersk[k]);
	// 					if(ourtree->getroot()->getchilds()[i]->getleaf()) ASSERT_EQ(((ourtree->getroot()->getchilds()[i]->getvalues())[j]), answersv[k]);
	// 					k++;
	// 				}
	// 			}
	// 		}
	// 	}
	// 	delete ourtree;
	// }

	// TEST(TestsBinarySearchTree,TestIntersection2)
 //    {
	// 	BPlusTree<int,int> *ourtree = new BPlusTree<int,int>(2);
	// 	ourtree->insert(19,55);
	// 	ourtree->insert(3,6);
	// 	ourtree->insert(2,666);
	// 	ourtree->insert(7,3);
	// 	ourtree->insert(25,24);
	// 	ourtree->insert(15,9);
	// 	ourtree->insert(18,15);
	// 	ourtree->insert(5,11);
	// 	ourtree->print(0,ourtree->getroot());
	// 	std::vector<int> answersk={7,19,2,3,5,7,15,18,19,25};
	// 	std::vector<int> answersv={0,0,666,6,11,3,9,15,55,24};
	// 	size_t k=0;
	// 	// ASSERT_EQ((ourtree->getroot()->getkeys())[0], answersk[k]);
	// 	// ASSERT_EQ((ourtree->getroot()->getvalues())[0], answersv[k]);
	// 	// k++;
	// 	for (int i = 0; i < ourtree->getroot()->getkey_num(); ++i)
	// 	{
	// 		ASSERT_EQ((ourtree->getroot()->getkeys())[i], answersk[k]);
	// 		k++;
	// 	}
	// 	for (int i = 0; i <=ourtree->getroot()->getkey_num(); ++i)
	// 	{
	// 		if((ourtree->getroot()->getchilds()[i])) 
	// 		{
	// 			for (int j = 0; j < ourtree->getroot()->getchilds()[i]->getkey_num(); ++j)
	// 			{
	// 				if (ourtree->getroot()->getchilds()[i]->getkeys()) 
	// 				{
	// 					ASSERT_EQ(((ourtree->getroot()->getchilds()[i]->getkeys())[j]), answersk[k]);
	// 					if(ourtree->getroot()->getchilds()[i]->getleaf()) ASSERT_EQ(((ourtree->getroot()->getchilds()[i]->getvalues())[j]), answersv[k]);
	// 					k++;
	// 				}
	// 			}
	// 		}
	// 	}
	// 	delete ourtree;
	// }
	// TEST(TestsBinarySearchTree,TestIntersection3)
 //    {
	// 	BPlusTree<int,int> *ourtree = new BPlusTree<int,int>(2);
	// 	ourtree->insert(27,4);
	// 	ourtree->insert(52,8);
	// 	ourtree->insert(20,2);
	// 	ourtree->insert(42,6);
	// 	ourtree->insert(93,12);
	// 	ourtree->insert(7,0);
	// 	ourtree->insert(14,1);
	// 	ourtree->insert(21,3);
	// 	ourtree->insert(34,5);
	// 	ourtree->insert(47,7);
	// 	ourtree->insert(64,9);
	// 	ourtree->insert(72,10);
	// 	ourtree->insert(91,11);
	// 	ourtree->insert(97,13);
	// 	ourtree->print(0,ourtree->getroot());
	// 	std::vector<int> answersk={42,20,27,7,14,7,15,18,19,25};
	// 	std::vector<int> answersv={6,0,666,6,11,3,9,15,55,24};
	// 	size_t k=0;
	// 	// ASSERT_EQ((ourtree->getroot()->getkeys())[0], answersk[k]);
	// 	// ASSERT_EQ((ourtree->getroot()->getvalues())[0], answersv[k]);
	// 	// k++;
	// 	// for (int i = 0; i < ourtree->getroot()->getkey_num(); ++i)
	// 	// {
	// 	// 	ASSERT_EQ((ourtree->getroot()->getkeys())[i], answersk[k]);
	// 	// 	k++;
	// 	// }
	// 	// for (int i = 0; i <=ourtree->getroot()->getkey_num(); ++i)
	// 	// {
	// 	// 	if((ourtree->getroot()->getchilds()[i])) 
	// 	// 	{
	// 	// 		for (int j = 0; j < ourtree->getroot()->getchilds()[i]->getkey_num(); ++j)
	// 	// 		{
	// 	// 			if (ourtree->getroot()->getchilds()[i]->getkeys()) 
	// 	// 			{
	// 	// 				ASSERT_EQ(((ourtree->getroot()->getchilds()[i]->getkeys())[j]), answersk[k]);
	// 	// 				if(ourtree->getroot()->getchilds()[i]->getleaf()) ASSERT_EQ(((ourtree->getroot()->getchilds()[i]->getvalues())[j]), answersv[k]);
	// 	// 				k++;
	// 	// 			}
	// 	// 		}
	// 	// 	}
	// 	// }
	// 	delete ourtree;
	// }
}
//g++ -std=c++11 -stdlib=libc++  BPlusTree.cpp BPlusTreeTests.cpp BPlusTree_main.cpp -lgtest -lpthread -o BPlusTreeTests
//valgrind --leak-check=full --leak-resolution=high ./BPlusTreeTest

