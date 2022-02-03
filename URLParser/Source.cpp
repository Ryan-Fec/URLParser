#include <iostream>
#include <string>

void parseurl(std::string url) {
	std::string scheme = url.substr(0, url.find("/"));
	std::cout << "scheme = " << scheme << "\n";
	std::string auth = url.substr(scheme.size(), url.substr(scheme.size() + 2, url.size()).find("/") + 2);
	std::cout << "Authority = " << auth << "\n";
	std::string path = url.substr(scheme.size() + auth.size(), url.size());
	std::cout << "Path = " << path << "\n";
}

int main() {
	std::string url;
	std::cin >> url;
	parseurl(url);
}