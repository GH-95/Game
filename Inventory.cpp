#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Inventory
{
private:
	T* pitems_;
	int capacity_;
	int size_;

public:
	Inventory(int capacity = 10) : pitems_(nullptr), size_(0)
	{
		if (capacity <= 0)
		{
			capacity_ = 1;
		}
		else
		{
			capacity_ = capacity;
		}
		pitems_ = new T[capacity_];
	}
	~Inventory()
	{
		delete[] pitems_;
		pitems_ = nullptr;
	}
	void AddItem(const T& item)
	{
		if (size_ < capacity_)
		{
			pitems_[size_] = item;
			size_++;
			printf("아이템이 추가했습니다. (현재 : %d / %d )\n", size_, capacity_);
		}
		else
		{
			printf("인벤토리가 가득 찼습니다.\n");
		}
	}
	void RemoveLastItem()
	{
		if (size_ > 0)
		{
			size_--;
			printf("아이템이 제거 되었습니다. (현재 : %d / %d )\n", size_, capacity_);
		}
		else
		{
			printf("인벤토리가 비어있습니다.\n");
		}
	}
	int GetSize() const
	{
		return size_;
	}
	int GetCapacity() const
	{
		return capacity_;
	}
	void PrintAllItems() const
	{
		printf("인벤토리 아이템 목록 (현재 : %d / %d )\n", size_, capacity_);
		if (size_ == 0)
		{
			printf("비어있음 \n");
		}
		else
		{
			for (int i = 0; i < size_; i++)
			{
				pitems_[i].PrintInfo();
			}
		}
	}
};

class Item
{
private:
	string name_;
	int price_;
public:
	Item(string name = "알 수 없는 아이템", int price = 0)
		: name_(name), price_(price)
	{
		printf(" %s 생성 \n", name_.c_str());
	}
	~Item()
	{
		printf(" %s 소멸 \n", name_.c_str());
	}
	void PrintInfo() const
	{
		printf("이름 : %s 가격 : %d G \n",name_.c_str(), price_);
	}
};


int main() 
{
	printf("************Item 인벤토리************\n");
	Inventory<Item> itemInventory(3);

	printf("************아이템 추가************\n");
	itemInventory.AddItem(Item("HP Potion", 100));
	itemInventory.AddItem(Item("MP Potion", 100));
	itemInventory.AddItem(Item("Shild", 50));
	itemInventory.AddItem(Item("얍", 1));

	printf("************현재 인벤토리 상태************\n");
	itemInventory.PrintAllItems();

	printf("************아이템 제거************\n");
	itemInventory.RemoveLastItem();
	itemInventory.PrintAllItems();

	printf("************모든 아이템 제거************\n");
	itemInventory.RemoveLastItem();
	itemInventory.RemoveLastItem();
	itemInventory.RemoveLastItem();

	printf("************비어있는 인벤토리 상태************\n");
	itemInventory.PrintAllItems();
	
	printf("************프로그램 종료************\n");

	return 0;
}