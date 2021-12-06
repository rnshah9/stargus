/*
 * DataChunk.h
 *
 *      Author: Andreas Volz
 */

#ifndef DATACHUNK_H_
#define DATACHUNK_H_

// System
#include <stdlib.h>

class DataChunk
{
public:
	/**
	 * Create a new DataChunk with empty size
	 */
	DataChunk();

	/**
	 * Create a new DataChunk and give DataChunk responsibility about freeing that memory
	 */
	DataChunk(unsigned char **data, const size_t size);

	virtual ~DataChunk();

	/**
	 * Add a *copy* of the provided data to internal data structure. This doesn't replace the data but concatenates it.
	 */
	void addData(unsigned char *data, const size_t size);

	unsigned char *getDataPointer() const;

	size_t getSize() const;

private:
	unsigned char *mData;
	size_t mSize;
};

#endif /* DATACHUNK_H_ */