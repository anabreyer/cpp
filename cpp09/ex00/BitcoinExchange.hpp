#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
#include <map>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <algorithm>
#include <ctime>

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

class BitcoinExchange
{
	public:
		BitcoinExchange(std::string input_path);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange&	operator = (const BitcoinExchange& copy);

		std::map<std::string, double>	getData() const;
		std::string						getRawData() const;
		std::string						getInput() const;

	private:
		std::map<std::string, double>	_data;
		std::string						_rawData;
		std::string						_input;
		std::string						readFile(std::string path) const;
		std::map<std::string, double>	parseData(std::string rawData) const;
		std::string						removeWhite(std::string str) const;
		void							processInput(std::string input) const;
		std::string						calculateLine(std::string date, std::string value) const;
		void							checkDate(std::string date) const;
		double							checkAmount(std::string amount) const;



};

#endif