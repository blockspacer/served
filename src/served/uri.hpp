/*
 * Copyright (C) 2014 MediaSift Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef SERVED_URI_HPP
#define SERVED_URI_HPP

#include <string>

namespace served {

class uri
{
public:
	//  -----  constructors  -----

	//  -----  URI component mutators  -----

	void set_URI      (std::string const& uri);
	void set_path     (std::string const& path);
	void set_query    (std::string const& query);
	void set_fragment (std::string const& fragment);

	//  -----  URI component selectors  -----

	// For uri: "/foo/bar?test=one#element"
	//
	// "/foo/bar?test=one"
	const std::string URI()      const;
	//
	// "/foo/bar"
	const std::string path()     const;
	//
	// "test=one"
	const std::string query()    const;
	//
	// "element"
	const std::string fragment() const;

private:
	std::string _uri;
	std::string _path;
	std::string _query;
	std::string _fragment;
};

std::string query_escape(const std::string& s);

std::string query_unescape(const std::string& s);

} // served

#endif // SERVED_URI_HPP
