#pragma once

template<typename Type>
class Array {
private:
	unsigned size;
	Type* elements;
public:
	Array() {
		size = 0;
		elements = new Type[size];
	}

	unsigned Size() { return this->size; };

	void Add(Type element) {
		size++;
		Type* newArray = new Type[size];
		
		for (int i = 0; i < size - 1; i++) {
			newArray[i] = elements[i];
		}

		newArray[size - 1] = element;
		elements = newArray;
	};

	void Remove(unsigned index) {
		size--;
		Type* newArray = new Type[size];

		unsigned count = 0;
		for (int i = 0; i < size + 1; i++) {
			if (i != index) {
				newArray[count] = elements[i];
				count++;
			}
		}

		elements = newArray;
	};

	Type* Get(unsigned index) {
		return &elements[index];
	}
};