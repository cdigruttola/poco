//
// Extractor.h
//
// Library: Data/ODBC
// Package: ODBC
// Module:  Extractor
//
// Definition of the Extractor class.
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef Data_ODBC_Extractor_INCLUDED
#define Data_ODBC_Extractor_INCLUDED


#include "Poco/Data/ODBC/ODBC.h"
#include "Poco/Data/ODBC/Preparator.h"
#include "Poco/Data/ODBC/ODBCMetaColumn.h"
#include "Poco/Data/ODBC/Error.h"
#include "Poco/Data/ODBC/Utility.h"
#include "Poco/Data/AbstractExtractor.h"
#include "Poco/Data/Constants.h"
#include "Poco/Data/Date.h"
#include "Poco/Data/Time.h"
#include "Poco/DateTime.h"
#include "Poco/Any.h"
#include "Poco/Dynamic/Var.h"
#include "Poco/Nullable.h"
#include "Poco/UTFString.h"
#include "Poco/TextEncoding.h"
#include "Poco/Exception.h"
#include <map>
#ifdef POCO_OS_FAMILY_WINDOWS
	#include <windows.h>
#endif
#include <sqltypes.h>


namespace Poco {
namespace Data {
namespace ODBC {


class ODBC_API Extractor: public Poco::Data::AbstractExtractor
	/// Extracts and converts data values from the result row returned by ODBC.
	/// If NULL is received, the incoming val value is not changed and false is returned
{
public:
	typedef Preparator::Ptr PreparatorPtr;

	Extractor(const StatementHandle& rStmt,
		Preparator::Ptr pPreparator,
		Poco::TextEncoding::Ptr pDBEncoding = nullptr,
		Poco::TextEncoding::Ptr pToEncoding = nullptr);
		/// Creates the Extractor.

	~Extractor();
		/// Destroys the Extractor.

	bool extract(std::size_t pos, Poco::Int8& val) override;
		/// Extracts an Int8.

	bool extract(std::size_t pos, std::vector<Poco::Int8>& val) override;
		/// Extracts an Int8 vector.

	bool extract(std::size_t pos, std::deque<Poco::Int8>& val) override;
		/// Extracts an Int8 deque.

	bool extract(std::size_t pos, std::list<Poco::Int8>& val) override;
		/// Extracts an Int8 list.

	bool extract(std::size_t pos, Poco::UInt8& val) override;
		/// Extracts an UInt8.

	bool extract(std::size_t pos, std::vector<Poco::UInt8>& val) override;
		/// Extracts an UInt8 vector.

	bool extract(std::size_t pos, std::deque<Poco::UInt8>& val) override;
		/// Extracts an UInt8 deque.

	bool extract(std::size_t pos, std::list<Poco::UInt8>& val) override;
		/// Extracts an UInt8 list.

	bool extract(std::size_t pos, Poco::Int16& val) override;
		/// Extracts an Int16.

	bool extract(std::size_t pos, std::vector<Poco::Int16>& val) override;
		/// Extracts an Int16 vector.

	bool extract(std::size_t pos, std::deque<Poco::Int16>& val) override;
		/// Extracts an Int16 deque.

	bool extract(std::size_t pos, std::list<Poco::Int16>& val) override;
		/// Extracts an Int16 list.

	bool extract(std::size_t pos, Poco::UInt16& val) override;
		/// Extracts an UInt16.

	bool extract(std::size_t pos, std::vector<Poco::UInt16>& val) override;
		/// Extracts an UInt16 vector.

	bool extract(std::size_t pos, std::deque<Poco::UInt16>& val) override;
		/// Extracts an UInt16 deque.

	bool extract(std::size_t pos, std::list<Poco::UInt16>& val) override;
		/// Extracts an UInt16 list.

	bool extract(std::size_t pos, Poco::Int32& val) override;
		/// Extracts an Int32.

	bool extract(std::size_t pos, std::vector<Poco::Int32>& val) override;
		/// Extracts an Int32 vector.

	bool extract(std::size_t pos, std::deque<Poco::Int32>& val) override;
		/// Extracts an Int32 deque.

	bool extract(std::size_t pos, std::list<Poco::Int32>& val) override;
		/// Extracts an Int32 list.

	bool extract(std::size_t pos, Poco::UInt32& val) override;
		/// Extracts an UInt32.

	bool extract(std::size_t pos, std::vector<Poco::UInt32>& val) override;
		/// Extracts an UInt32 vector.

	bool extract(std::size_t pos, std::deque<Poco::UInt32>& val) override;
		/// Extracts an UInt32 deque.

	bool extract(std::size_t pos, std::list<Poco::UInt32>& val) override;
		/// Extracts an UInt32 list.

	bool extract(std::size_t pos, Poco::Int64& val) override;
		/// Extracts an Int64.

	bool extract(std::size_t pos, std::vector<Poco::Int64>& val) override;
		/// Extracts an Int64 vector.

	bool extract(std::size_t pos, std::deque<Poco::Int64>& val) override;
		/// Extracts an Int64 deque.

	bool extract(std::size_t pos, std::list<Poco::Int64>& val) override;
		/// Extracts an Int64 list.

	bool extract(std::size_t pos, Poco::UInt64& val) override;
		/// Extracts an UInt64.

	bool extract(std::size_t pos, std::vector<Poco::UInt64>& val) override;
		/// Extracts an UInt64 vector.

	bool extract(std::size_t pos, std::deque<Poco::UInt64>& val) override;
		/// Extracts an UInt64 deque.

	bool extract(std::size_t pos, std::list<Poco::UInt64>& val) override;
		/// Extracts an UInt64 list.

#ifndef POCO_INT64_IS_LONG
	bool extract(std::size_t pos, long& val) override;
		/// Extracts a long.

	bool extract(std::size_t pos, unsigned long& val) override;
		/// Extracts an unsigned long.

	bool extract(std::size_t pos, std::vector<long>& val) override;
		/// Extracts a long vector.

	bool extract(std::size_t pos, std::deque<long>& val) override;
		/// Extracts a long deque.

	bool extract(std::size_t pos, std::list<long>& val) override;
		/// Extracts a long list.

	bool extract(std::size_t pos, std::vector<unsigned long>& val) override;
		/// Extracts an unsigned long vector.

	bool extract(std::size_t pos, std::deque<unsigned long>& val) override;
		/// Extracts an unsigned long deque.

	bool extract(std::size_t pos, std::list<unsigned long>& val) override;
		/// Extracts an unsigned long list.
#endif

	bool extract(std::size_t pos, bool& val) override;
		/// Extracts a boolean.

	bool extract(std::size_t pos, std::vector<bool>& val) override;
		/// Extracts a boolean vector.

	bool extract(std::size_t pos, std::deque<bool>& val) override;
		/// Extracts a boolean deque.

	bool extract(std::size_t pos, std::list<bool>& val) override;
		/// Extracts a boolean list.

	bool extract(std::size_t pos, float& val) override;
		/// Extracts a float.

	bool extract(std::size_t pos, std::vector<float>& val) override;
		/// Extracts a float vector.

	bool extract(std::size_t pos, std::deque<float>& val) override;
		/// Extracts a float deque.

	bool extract(std::size_t pos, std::list<float>& val) override;
		/// Extracts a float list.

	bool extract(std::size_t pos, double& val) override;
		/// Extracts a double.

	bool extract(std::size_t pos, std::vector<double>& val) override;
		/// Extracts a double vector.

	bool extract(std::size_t pos, std::deque<double>& val) override;
		/// Extracts a double deque.

	bool extract(std::size_t pos, std::list<double>& val) override;
		/// Extracts a double list.

	bool extract(std::size_t pos, char& val) override;
		/// Extracts a single character.

	bool extract(std::size_t pos, std::vector<char>& val) override;
		/// Extracts a single character vector.

	bool extract(std::size_t pos, std::deque<char>& val) override;
		/// Extracts a single character deque.

	bool extract(std::size_t pos, std::list<char>& val) override;
		/// Extracts a single character list.

	bool extract(std::size_t pos, std::string& val) override;
		/// Extracts a string.

	bool extract(std::size_t pos, std::vector<std::string>& val) override;
		/// Extracts a string vector.

	bool extract(std::size_t pos, std::deque<std::string>& val) override;
		/// Extracts a string deque.

	bool extract(std::size_t pos, std::list<std::string>& val) override;
		/// Extracts a string list.
		/// Extracts a single character list.

	bool extract(std::size_t pos, UTF16String& val) override;
	/// Extracts a string.

	bool extract(std::size_t pos, std::vector<UTF16String>& val) override;
	/// Extracts a string vector.

	bool extract(std::size_t pos, std::deque<UTF16String>& val) override;
	/// Extracts a string deque.

	bool extract(std::size_t pos, std::list<UTF16String>& val) override;
	/// Extracts a string list.

	bool extract(std::size_t pos, Poco::Data::BLOB& val) override;
		/// Extracts a BLOB.

	bool extract(std::size_t pos, Poco::Data::CLOB& val) override;
		/// Extracts a CLOB.

	bool extract(std::size_t pos, std::vector<Poco::Data::BLOB>& val) override;
		/// Extracts a BLOB vector.

	bool extract(std::size_t pos, std::deque<Poco::Data::BLOB>& val) override;
		/// Extracts a BLOB deque.

	bool extract(std::size_t pos, std::list<Poco::Data::BLOB>& val) override;
		/// Extracts a BLOB list.

	bool extract(std::size_t pos, std::vector<Poco::Data::CLOB>& val) override;
		/// Extracts a CLOB vector.

	bool extract(std::size_t pos, std::deque<Poco::Data::CLOB>& val) override;
		/// Extracts a CLOB deque.

	bool extract(std::size_t pos, std::list<Poco::Data::CLOB>& val) override;
		/// Extracts a CLOB list.

	bool extract(std::size_t pos, Poco::Data::Date& val) override;
		/// Extracts a Date.

	bool extract(std::size_t pos, std::vector<Poco::Data::Date>& val) override;
		/// Extracts a Date vector.

	bool extract(std::size_t pos, std::deque<Poco::Data::Date>& val) override;
		/// Extracts a Date deque.

	bool extract(std::size_t pos, std::list<Poco::Data::Date>& val) override;
		/// Extracts a Date list.

	bool extract(std::size_t pos, Poco::Data::Time& val) override;
		/// Extracts a Time.

	bool extract(std::size_t pos, std::vector<Poco::Data::Time>& val) override;
		/// Extracts a Time vector.

	bool extract(std::size_t pos, std::deque<Poco::Data::Time>& val) override;
		/// Extracts a Time deque.

	bool extract(std::size_t pos, std::list<Poco::Data::Time>& val) override;
		/// Extracts a Time list.

	bool extract(std::size_t pos, Poco::DateTime& val) override;
		/// Extracts a DateTime.

	bool extract(std::size_t pos, std::vector<Poco::DateTime>& val) override;
		/// Extracts a DateTime vector.

	bool extract(std::size_t pos, std::deque<Poco::DateTime>& val) override;
		/// Extracts a DateTime deque.

	bool extract(std::size_t pos, std::list<Poco::DateTime>& val) override;
		/// Extracts a DateTime list.

	bool extract(std::size_t pos, Poco::UUID& val) override;
		/// Extracts a UUID.

	bool extract(std::size_t pos, Poco::Any& val) override;
		/// Extracts an Any.

	bool extract(std::size_t pos, std::vector<Poco::Any>& val) override;
		/// Extracts an Any vector.

	bool extract(std::size_t pos, std::deque<Poco::Any>& val) override;
		/// Extracts an Any deque.

	bool extract(std::size_t pos, std::list<Poco::Any>& val) override;
		/// Extracts an Any list.

	bool extract(std::size_t pos, Poco::Dynamic::Var& val) override;
		/// Extracts a Dynamic::Var.

	bool extract(std::size_t pos, std::vector<Poco::Dynamic::Var>& val) override;
		/// Extracts a Dynamic::Var vector.

	bool extract(std::size_t pos, std::deque<Poco::Dynamic::Var>& val) override;
		/// Extracts a Dynamic::Var deque.

	bool extract(std::size_t pos, std::list<Poco::Dynamic::Var>& val) override;
		/// Extracts a Dynamic::Var list.

	bool extract(std::size_t pos, Poco::Nullable<Poco::Int8>& val) override;
		/// Extracts a Nullable Int8.

	bool extract(std::size_t pos, Poco::Nullable<Poco::UInt8>& val) override;
		/// Extracts a Nullable UInt8.

	bool extract(std::size_t pos, Poco::Nullable<Poco::Int16>& val) override;
		/// Extracts a Nullable Int16.

	bool extract(std::size_t pos, Poco::Nullable<Poco::UInt16>& val) override;
		/// Extracts a Nullable UInt16.

	bool extract(std::size_t pos, Poco::Nullable<Poco::Int32>& val) override;
		/// Extracts a Nullable Int32.

	bool extract(std::size_t pos, Poco::Nullable<Poco::UInt32>& val) override;
		/// Extracts a Nullable UInt32.

	bool extract(std::size_t pos, Poco::Nullable<Poco::Int64>& val) override;
		/// Extracts a Nullable Int64.

	bool extract(std::size_t pos, Poco::Nullable<Poco::UInt64>& val) override;
		/// Extracts a Nullable UInt64.

#ifndef POCO_INT64_IS_LONG
	bool extract(std::size_t pos, Poco::Nullable<long>& val) override;
		/// Extracts a Nullable long.

	bool extract(std::size_t pos, Poco::Nullable<unsigned long>& val) override;
		/// Extracts a Nullable unsigned long.
#endif

	bool extract(std::size_t pos, Poco::Nullable<bool>& val) override;
		/// Extracts a Nullable bool.

	bool extract(std::size_t pos, Poco::Nullable<float>& val) override;
		/// Extracts a Nullable float.

	bool extract(std::size_t pos, Poco::Nullable<double>& val) override;
		/// Extracts a Nullable double.

	bool extract(std::size_t pos, Poco::Nullable<char>& val) override;
		/// Extracts a Nullable char.

	bool extract(std::size_t pos, Poco::Nullable<std::string>& val) override;
		/// Extracts a Nullable string.

	bool extract(std::size_t pos, Poco::Nullable<UTF16String>& val) override;
		/// Extracts a Nullable UTF16String.

	bool extract(std::size_t pos, Poco::Nullable<BLOB>& val) override;
		/// Extracts a Nullable BLOB.

	bool extract(std::size_t pos, Poco::Nullable<CLOB>& val) override;
		/// Extracts a Nullable CLOB.

	bool extract(std::size_t pos, Poco::Nullable<DateTime>& val) override;
		/// Extracts a Nullable DateTime.

	bool extract(std::size_t pos, Poco::Nullable<Date>& val) override;
		/// Extracts a Nullable Date.

	bool extract(std::size_t pos, Poco::Nullable<Time>& val) override;
		/// Extracts a Nullable Time.

	bool extract(std::size_t pos, Poco::Nullable<UUID>& val) override;
		/// Extracts a Nullable UUID.

	bool extract(std::size_t pos, Poco::Nullable<Any>& val) override;
		/// Extracts a Nullable Any.

	bool extract(std::size_t pos, Poco::Nullable<Poco::Dynamic::Var>& val) override;
		/// Extracts a Nullable Var.

	void setDataExtraction(Preparator::DataExtraction ext);
		/// Set data extraction mode.

	Preparator::DataExtraction getDataExtraction() const;
		/// Returns data extraction mode.

	bool isNull(std::size_t col, std::size_t row = POCO_DATA_INVALID_ROW) override;
		/// Returns true if the value at [col,row] is null.

	void reset() override;
		/// Resets the internally cached length indicators.

private:
	static const int CHUNK_SIZE = 1024;
		/// Amount of data retrieved in one SQLGetData() request when doing manual extract.

	static const std::string FLD_SIZE_EXCEEDED_FMT;
		/// String format for the exception message when the field size is exceeded.

	void checkDataSize(std::size_t size);
		/// This check is only performed for bound data
		/// retrieval from variable length columns.
		/// The reason for this check is to ensure we can
		/// accept the value ODBC driver is supplying
		/// (i.e. the bound buffer is large enough to receive
		/// the returned value)

	void resizeLengths(std::size_t pos);
		/// Resizes the vector holding extracted data lengths to the
		/// appropriate size.

	template<typename T>
	bool extractBoundImpl(std::size_t pos, T& val)
	{
		if (isNull(pos)) return false;
		poco_assert_dbg (typeid(T) == _pPreparator->at(pos).type());
		val = *AnyCast<T>(&_pPreparator->at(pos));
		return true;
	}

	bool extractBoundImpl(std::size_t pos, Poco::Data::BLOB& val);
	bool extractBoundImpl(std::size_t pos, Poco::Data::CLOB& val);

	template <typename C>
	bool extractBoundImplContainer(std::size_t pos, C& val)
	{
		typedef typename C::value_type Type;
		poco_assert_dbg (typeid(std::vector<Type>) == _pPreparator->at(pos).type());
		std::vector<Type>& v = RefAnyCast<std::vector<Type> >(_pPreparator->at(pos));
		val.assign(v.begin(), v.end());
		return true;
	}

	bool extractBoundImplContainer(std::size_t pos, std::vector<std::string>& values);
	bool extractBoundImplContainer(std::size_t pos, std::deque<std::string>& values);
	bool extractBoundImplContainer(std::size_t pos, std::list<std::string>& values);
	bool extractBoundImplContainer(std::size_t pos, std::vector<Poco::UTF16String>& values);
	bool extractBoundImplContainer(std::size_t pos, std::deque<Poco::UTF16String>& values);
	bool extractBoundImplContainer(std::size_t pos, std::list<Poco::UTF16String>& values);
	bool extractBoundImplContainer(std::size_t pos, std::vector<Poco::Data::CLOB>& values);
	bool extractBoundImplContainer(std::size_t pos, std::deque<Poco::Data::CLOB>& values);
	bool extractBoundImplContainer(std::size_t pos, std::list<Poco::Data::CLOB>& values);
	bool extractBoundImplContainer(std::size_t pos, std::vector<Poco::Data::BLOB>& values);
	bool extractBoundImplContainer(std::size_t pos, std::deque<Poco::Data::BLOB>& values);
	bool extractBoundImplContainer(std::size_t pos, std::list<Poco::Data::BLOB>& values);

	template <typename C>
	bool extractBoundImplContainerString(std::size_t pos, C& values)
	{
		typedef typename C::value_type StringType;
		typedef typename C::iterator ItType;
		typedef typename StringType::value_type CharType;

		CharType** pc = AnyCast<CharType*>(&(_pPreparator->at(pos)));
		poco_assert_dbg (pc);
		poco_assert_dbg(*pc);
		poco_assert_dbg (_pPreparator->bulkSize() == values.size());
		std::size_t colWidth = columnSize(pos);
		ItType it = values.begin();
		ItType end = values.end();
		for (int row = 0; it != end; ++it, ++row)
		{
			it->assign(*pc + row * colWidth / sizeof(CharType), _pPreparator->actualDataSize(pos, row));
			// clean up superfluous null chars returned by some drivers
			typename StringType::size_type trimLen = 0;
			typename StringType::reverse_iterator sIt = it->rbegin();
			typename StringType::reverse_iterator sEnd = it->rend();
			for (; sIt != sEnd; ++sIt)
			{
				if (*sIt == '\0') ++trimLen;
				else break;
			}
			if (trimLen) it->assign(it->begin(), it->begin() + it->length() - trimLen);
		}

		return true;
	}

	template <typename C>
	bool extractBoundImplContainerLOB(std::size_t pos, C& values)
	{
		typedef typename C::value_type LOBType;
		typedef typename LOBType::ValueType CharType;
		typedef typename C::iterator ItType;

		CharType** pc = AnyCast<CharType*>(&(_pPreparator->at(pos)));
		poco_assert_dbg (pc);
		poco_assert_dbg(*pc);
		poco_assert_dbg (_pPreparator->bulkSize() == values.size());
		std::size_t colWidth = _pPreparator->maxDataSize(pos);
		ItType it = values.begin();
		ItType end = values.end();
		for (int row = 0; it != end; ++it, ++row)
			it->assignRaw(*pc + row * colWidth, _pPreparator->actualDataSize(pos, row));

		return true;
	}

	template<typename T>
	bool extractBoundImplLOB(std::size_t pos, Poco::Data::LOB<T>& val)
	{
		if (isNull(pos)) return false;

		std::size_t dataSize = _pPreparator->actualDataSize(pos);
		checkDataSize(dataSize);
		T* sp = AnyCast<T*>(_pPreparator->at(pos));
		val.assignRaw(sp, dataSize);

		return true;
	}

	template<typename T>
	bool extractManualImpl(std::size_t pos, T& val, SQLSMALLINT cType)
	{
		SQLRETURN rc = 0;
		T value{};

		resizeLengths(pos);

		rc = SQLGetData(_rStmt,
			(SQLUSMALLINT) pos + 1,
			cType,  //C data type
			&value, //returned value
			0,      //buffer length (ignored)
			&_lengths[pos]);  //length indicator

		if (Utility::isError(rc))
			throw StatementException(_rStmt, "ODBC::Extractor::extractManualImpl():SQLGetData()");

		if (isNullLengthIndicator(_lengths[pos]))
			return false;
		else
		{
			//for fixed-length data, buffer must be large enough
			//otherwise, driver may write past the end
			poco_assert_dbg (_lengths[pos] <= sizeof(T));
			val = value;
		}

		return true;
	}

	template <typename T, typename NT>
	bool extAny(std::size_t pos, T& val)
	{
		NT i;
		if (extract(pos, i))
		{
			val = i;
			return true;
		}
		else
		{
			val = Nullable<NT>();
			return false;
		}
	}

	template <typename T>
	bool extractImpl(std::size_t pos, T& val)
		/// Utility function for extraction of Any and Dynamic::Var.
	{
		ODBCMetaColumn column(_rStmt, pos);

		switch (column.type())
		{
			case MetaColumn::FDT_INT8:
			{ return extAny<T, Poco::Int8>(pos, val); }

			case MetaColumn::FDT_UINT8:
			{ return extAny<T, Poco::UInt8>(pos, val); }

			case MetaColumn::FDT_INT16:
			{ return extAny<T, Poco::Int16>(pos, val); }

			case MetaColumn::FDT_UINT16:
			{ return extAny<T, Poco::UInt16>(pos, val); }

			case MetaColumn::FDT_INT32:
			{ return extAny<T, Poco::Int32>(pos, val);	}

			case MetaColumn::FDT_UINT32:
			{ return extAny<T, Poco::UInt32>(pos, val); }

			case MetaColumn::FDT_INT64:
			{ return extAny<T, Poco::Int64>(pos, val); }

			case MetaColumn::FDT_UINT64:
			{ return extAny<T, Poco::UInt64>(pos, val); }

			case MetaColumn::FDT_BOOL:
			{ return extAny<T, bool>(pos, val); }

			case MetaColumn::FDT_FLOAT:
			{ return extAny<T, float>(pos, val); }

			case MetaColumn::FDT_DOUBLE:
			{ return extAny<T, double>(pos, val); }

			case MetaColumn::FDT_STRING:
			{ return extAny<T, std::string>(pos, val); }

			case MetaColumn::FDT_WSTRING:
			{ return extAny<T, Poco::UTF16String>(pos, val); }

			case MetaColumn::FDT_BLOB:
			{ return extAny<T, Poco::Data::BLOB>(pos, val); }

			case MetaColumn::FDT_CLOB:
			{ return extAny<T, Poco::Data::CLOB>(pos, val); }

			case MetaColumn::FDT_DATE:
			{ return extAny<T, Poco::Data::Date>(pos, val); }

			case MetaColumn::FDT_TIME:
			{ return extAny<T, Poco::Data::Time>(pos, val); }

			case MetaColumn::FDT_TIMESTAMP:
			{ return extAny<T, Poco::DateTime>(pos, val); }

			case MetaColumn::FDT_UUID:
			{ return extAny<T, Poco::UUID>(pos, val); }

			default:
				throw DataFormatException("Unsupported data type.");
		}

		return false;
	}

	template <typename C>
	bool stringContainerExtractConvert(std::size_t pos, C& val)
	{
		bool ret = false;
		C res;
		ret = extractBoundImplContainer(pos, res);
		val.clear();
		if (ret)
		{
			val.resize(res.size());
			typename C::iterator vIt = val.begin();
			typename C::iterator it = res.begin();
			for (; it != res.end(); ++it, ++vIt) transcode(*it, *vIt);
		}
		return ret;
	}

	template <typename C>
	bool stringContainerExtract(std::size_t pos, C& val)
	{
		bool ret = false;
		if (Preparator::DE_BOUND == _dataExtraction)
		{
			if (!transcodeRequired())
				ret = extractBoundImplContainer(pos, val);
			else
				ret = stringContainerExtractConvert(pos, val);
		}
		else
			throw InvalidAccessException("Direct container extraction only allowed for bound mode.");
		return ret;
	}

	template <typename T>
	bool extractNullable(std::size_t pos, Poco::Nullable<T>& val)
	{
		typename Poco::Nullable<T>::Type v;
		if (!extract(pos, v)) val.clear();
		else val = std::move(v);
		return true;
	}

	bool isNullLengthIndicator(SQLLEN val) const;
		/// The reason for this utility wrapper are platforms where
		/// SQLLEN macro (a.k.a. SQLINTEGER) yields 64-bit value,
		/// while SQL_NULL_DATA (#define'd as -1 literal) remains 32-bit.

	SQLINTEGER columnSize(std::size_t pos) const;

	const StatementHandle&     _rStmt;
	PreparatorPtr              _pPreparator;
	Preparator::DataExtraction _dataExtraction;
	std::vector<SQLLEN>        _lengths;
};


///
/// inlines
///

inline bool Extractor::extractBoundImpl(std::size_t pos, Poco::Data::BLOB& val)
{
	return extractBoundImplLOB<BLOB::ValueType>(pos, val);
}


inline bool Extractor::extractBoundImpl(std::size_t pos, Poco::Data::CLOB& val)
{
	return extractBoundImplLOB<CLOB::ValueType>(pos, val);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos, std::vector<std::string>& values)
{
	return extractBoundImplContainerString(pos, values);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos, std::deque<std::string>& values)
{
	return extractBoundImplContainerString(pos, values);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos, std::list<std::string>& values)
{
	return extractBoundImplContainerString(pos, values);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos, std::vector<Poco::UTF16String>& values)
{
	return extractBoundImplContainerString(pos, values);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos, std::deque<Poco::UTF16String>& values)
{
	return extractBoundImplContainerString(pos, values);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos, std::list<Poco::UTF16String>& values)
{
	return extractBoundImplContainerString(pos, values);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos,
	std::vector<Poco::Data::CLOB>& values)
{
	return extractBoundImplContainerLOB(pos, values);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos,
	std::deque<Poco::Data::CLOB>& values)
{
	return extractBoundImplContainerLOB(pos, values);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos,
	std::list<Poco::Data::CLOB>& values)
{
	return extractBoundImplContainerLOB(pos, values);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos,
	std::vector<Poco::Data::BLOB>& values)
{
	return extractBoundImplContainerLOB(pos, values);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos,
	std::deque<Poco::Data::BLOB>& values)
{
	return extractBoundImplContainerLOB(pos, values);
}


inline bool Extractor::extractBoundImplContainer(std::size_t pos,
	std::list<Poco::Data::BLOB>& values)
{
	return extractBoundImplContainerLOB(pos, values);
}


inline void Extractor::setDataExtraction(Preparator::DataExtraction ext)
{
	_pPreparator->setDataExtraction(_dataExtraction = ext);
}


inline Preparator::DataExtraction Extractor::getDataExtraction() const
{
	return _dataExtraction;
}


inline void Extractor::reset()
{
	_lengths.clear();
}


inline void Extractor::resizeLengths(std::size_t pos)
{
	if (pos >= _lengths.size())
		_lengths.resize(pos + 1, (SQLLEN) 0);
}


inline bool Extractor::isNullLengthIndicator(SQLLEN val) const
{
	return SQL_NULL_DATA == (int) val;
}


inline SQLINTEGER Extractor::columnSize(std::size_t pos) const
{
	std::size_t size = ODBCMetaColumn(_rStmt, pos).length();
	std::size_t maxSize = _pPreparator->maxDataSize(pos);
	if (size > maxSize) size = maxSize;
	return (SQLINTEGER) size;
}


} } } // namespace Poco::Data::ODBC


#endif // Data_ODBC_Extractor_INCLUDED
