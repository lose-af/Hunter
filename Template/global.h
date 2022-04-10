#define CONFIG_PATH "./plugins/hunter/setting.json"
#define LANG_DIR "./plugins/hunter/lang/"
#define DB_PATH "./plugins/hunter/DB"
typedef std::unordered_map<std::string, std::pair<int, int>> HunterTable;
extern class Logger logger;
extern class Config setting;
extern  class DB db;